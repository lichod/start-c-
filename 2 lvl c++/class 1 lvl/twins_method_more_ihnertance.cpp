#include <iostream>
#include<cstring>

using namespace std; 

class Car
{
public:
    Car()     //создание конструктора 
    {
        cout<<"Start Construct Car"<<endl;
    }
    ~Car()     //создание деструктора 
    {
        cout<<"Start Destruct Car"<<endl;
    }
    void Use()
    {
        cout<<"Ich fahren"<<endl;
    }
};
class Airplane 
{
public:
    Airplane()            //создание конструктора 
    {
        cout<<"Start construct Airplane"<<endl;
    }
    ~Airplane()            //создание деструктора 
    {
        cout<<"Start Destruct Airplane"<<endl;
    }
    void Use()
    {
        cout<<"Ich Flug"<<endl;
    }
};
class FlyingCar : public Car, public Airplane //множественное наследование 
{
public: 
    FlyingCar() //создание конструктора 
    {
        cout<<"Start construct Flyingcar"<<endl;
    }
    ~FlyingCar() //создание деструктора 
    {
        cout<<"Start Destruct Flyingcar"<<endl;
    }
};
int main()
{
   
    FlyingCar fc;
    ((Car)fc).Use();      //синаксис приведения ((Car)fc).Use(); для вызова метода 
    ((Airplane)fc).Use();


    return 0;
};