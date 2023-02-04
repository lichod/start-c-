#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

//шаблоны классов 

class Point         //создание базового класса 
{
public: 
    Point()      //создание базового конструктора 
    {  
        x = y = z = 0;
    }
    Point(int x, int y, int z)      //конструктор со значениями
    {
        this-> x = x;
        this-> y = y;
        this-> z = z;
    }
private:
    int x;
    int y;
    int z;
};




template<class T1, class T2>      //создание шаблонного класса вместо typename можно заменить class
class Typesize
{
public:
    Typesize(T1 value,T2 value2)     //создание конструктора с переменнами
    {
        this-> value = value;
        this-> value2 = value2;
    }
    void DataTypeSize()        //метод определения величины информации 
    {
        cout<<"value 1 : "<<sizeof(value)<<endl;
        cout<<"value 2 : "<<sizeof(value2)<<endl;
        
    }

protected:                //объявление переменных в protected
    T1 value;
    T2 value2;
};

template<class T1, class T2>             //создание шаблонного класса с наследованием 
class Typeinfo : public Typesize<T1,T2>  //наследование в класс typeinfo из typesize
{
public: 
    Typeinfo(T1 value, T2 value2) : Typesize<T1,T2>(value, value2)  //создание конструктора с наследованием
    {

    };
    void ShowTypeName() //метод вывода информации о типе использования переменной
    {
        cout<<"Name type 1 : "<<typeid(this->value).name()<<endl;
        cout<<"Name type 2 : "<<typeid(this->value2).name()<<endl;
    }
};

int main()
{
    double a = 5;
    Point point;

    Typeinfo<double,Point> popc(a,point);     //создание шаблонного класса
    popc.ShowTypeName();                      //вызов метода о типе переменной 
    cout<<endl;
    popc.DataTypeSize();                      //вызов метода о величине информации в методе 

    return 0;
}