#include <iostream>
#include<cstring>
using namespace std;
class change;
class Human 
{
public:

    int age;
    string First_name;
    void Print(){                                       //создание функции по выводу информации из класса
        cout<<"Name "<<First_name<<"\tage "<<age<<endl;
    };
};
class Point
{   private:     //доступно при использовании геттера либо сеттера
    int x;
    int y;
    public:
    Point(){
        x = 0;
        y = 0; 
        cout<<this<<"start construct"<<endl;
    }
    Point(int x, int y){
        this -> x = x;
        this -> y = y; 
        cout<<"construct"<<this<<endl;
    }
    bool operator ==(const Point &other){                   //перегрузка оператора ==
       return this->x == other.x && this->y == other.y;
     
    }
    bool operator !=(const Point &other){                 //перегрузка оператора !=
       return !(this->x == other.x && this->y == other.y);
     
    }
    Point operator +(const Point &other){                //перегрузка оператора + так же умножение деление и вычитание 
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
    Point & operator ++(){ //перегрузка оператора инкремента
        this->x++;
        this->y +=1;
        return *this;
    };
    Point & operator++(int value){ //перегрузка оператора инкремента
        Point temp(*this);
        this->x++;
        this->y++;
        return temp;

    };
        Point & operator--(int value){  //перегрузка оператора декремента 
        Point temp(*this);
        this->x--;
        this->y--;
        return temp;

    };
    int Get_X(){ //получает и выводит значение
        return x;
    };
    
    int Get_y(){
        return y;
    };
   /* void Set_X(int value_x){  //изменяет значение
     x = value_x; //устанавливаем значение для поля x
    };
    void Set_y(int value_y){
        y = value_y;
    };*/
    void Print(){
        cout<<"x = "<<x<<"\nY = "<<y<<endl;
    };
    friend void ChangeX(Point &value,change &changevalue); //добавляем функцию в друзья для использования через команду friend
};  

class coffe_grinder
{
private: 
    bool check_voltage(){
        return true;
    };


public: 
void start(){
    bool VoltageNormal = check_voltage();

    VoltageNormal?cout<<"Vjuhh"<<endl:cout<<"Beep"<<"BEEP"<<endl;

};
};
void ChangeX(Point &value, change &changevalue){    //изменение параметров объекта класса через функцию
    value.x -=1;
    value.y -=1;
    changevalue.Data -=1;
}
class change{
    private:
    int Data = 0;
    friend void ChangeX(Point &value, change &changevalue);
};
int main(){
   Point a(5,15);
   change Change;
   a.Print();
   ChangeX(a,Change);
   a.Print();
    return 0;
}