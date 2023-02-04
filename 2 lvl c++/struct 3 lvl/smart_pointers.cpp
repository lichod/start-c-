#include <iostream>
#include <cstring>
using namespace std;
                                        //умные указатели smart pointers

template<typename T>                    //создаем шаблон класса 
class SmartPointer
{
public:                 
    SmartPointer(T *ptr)               //создаем конструктор с принимаемым параметром из привата
    {
        this->ptr = ptr;               //присваиваем значение параметра 
    }
    ~SmartPointer()                    //вызываем деструктор 
    { 
        delete ptr;                    //удаляем данные в ячейках памяти
    }
    T& operator*()                     //перегружаем оператор *
    {
        return *ptr;       
    }
private:
    T *ptr;                            //создаем значение приват

};


int main()
{

  SmartPointer<int> pointer = new int(5);
  
  *pointer = 9021;                      //вненсение новых данных в ячейку 
  
  cout<<*pointer<<endl;


    return 0;
}