#include <iostream>
#include<cstring>

using namespace std;

class Weapon            //создание абстрактного класса 
{
public:
    virtual void Shoot() = 0;
};
class Knife: public Weapon
{
    public:
    void Shoot() override
    {
        cout<<"ColDamage"<<endl;
    }
};
class Gun: public Weapon         
{
public: 
    void Shoot() override   //вызов виртуал метода 
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
class Bazuka :public Weapon
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
        void Shoot(Weapon *weapon){
            weapon->Shoot();
        }
};

int main()
{
    Gun gun;
    SubmachinGun machinegun; 
    Bazuka bazuka; 
    Knife knife;

    Player player; 
    player.Shoot(&knife);


   // Gun *weapon = &machinegun; 

   // weapon -> Shoot();
    return 0;
};
/////////////////////////////////////////////////////////////////////////////////////////
/*Полиморфизм, только классы наследования могут использоваться ссылки в одной иеррархии */