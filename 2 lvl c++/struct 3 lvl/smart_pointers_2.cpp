#include <iostream>
#include <cstring>
#include <memory>
using namespace std;
/*
auto_ptr    устарел не используют 
unique_ptr
shared_ptr
*/

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
    /*
    auto_ptr<int> ap1(new int[5]);
    auto_ptr<int> ap2(ap1);
    */

   /*
   unique_ptr<int> up1(new int[5]);
   unique_ptr<int> up2;                                             //ap2 = move(ap1);
   up2.swap(up1);

   int *p = new int(5);
   unique_ptr<int> up1(p);
   up1.reset();        //затирка данных
   up1.release();      //затирка указателя данные остаются
  */
  
    shared_ptr<int> p1(new int[53]);
    
    shared_ptr<int> p2(p1);

   return 0;
};