#include <iostream>
#include<cstring>

using namespace std;

class Gun
{
public: 
    virtual void Shoot()    //вызов виртуал метода
    {
        cout<<"BANG"<<endl;
    }
};
class SubmachinGun :public Gun
{
public:
    void Shoot() override   //ключевое слово override для контроля переопределения метода
    {
        cout<<"BANG BANG BANG"<<endl;
    }
};
class Bazuka :public Gun
{
public: 
    void Shoot() override
    {
        cout<<"BIG BUM"<<endl;
    };
};
class Player 
{
    public: 
        void Shoot(Gun *gun){
            gun->Shoot();
        }
};

int main()
{
    Gun gun;
    SubmachinGun machinegun; 

    Player player; 
    player.Shoot(&machinegun);


   // Gun *weapon = &machinegun; 

   // weapon -> Shoot();
    return 0;
};
/////////////////////////////////////////////////////////////////////////////////////////
/*Полиморфизм, только классы наследования могут использоваться ссылки в одной иеррархии */