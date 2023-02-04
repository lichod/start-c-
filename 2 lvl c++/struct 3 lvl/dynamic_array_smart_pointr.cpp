#include <iostream>
#include <cstring>
#include<memory>
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
    const int SIZE = 5;
    
    shared_ptr<int[]> ptr(new int[SIZE]{12,44,666,109,105});    //использование shared_ptr в int нужно поставить [] чтобы работать с массивом
    for(int i = 0; i<SIZE ; i++)                                //цикл по выводу информации из массива
    {
        cout<<ptr[i]<<endl;
    }

    return 0;
}