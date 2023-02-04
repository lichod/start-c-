#include <iostream>
#include <cstring>
using namespace std; 

class IBicycle                    //интерфейс это класс чисто с виртуальными методами 
{
public:
    void virtual  Twisttheweel() = 0;
    void virtual Ride() = 0;
};
class SimpleBasical:public IBicycle
{
public:
    void Twisttheweel() override
    {
        cout<<"method Twistheweel() simplebasical"<<endl;
    };
    void Ride() override 
    {
        cout<<"Method Ride() simplebasical"<<endl;
    };
};
class Sportbycicle: public IBicycle 
{
public:
    void Twisttheweel() override
    {
        cout<<"method Twistheweel() Sportbycicle"<<endl;
    };
    void Ride() override 
    {
        cout<<"Method Ride() Sportbycicle"<<endl;
    };
};
class Human
{
    public: 
    void RideOn(IBicycle & bicycle)
    {
        cout<<"Крутить руль"<<endl;
        bicycle.Twisttheweel();
        cout<<endl<<"Поехали"<<endl;
        bicycle.Ride();
    }
};

int main()
{
  setlocale(LC_ALL,"");
    SimpleBasical sb; 
    
    Sportbycicle sp;

    Human human;
    human.RideOn(sb);
    human.RideOn(sp);
    
    return 0;
};