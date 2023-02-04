#include <iostream>
#include <cstring>
using namespace std;
//задваивание данных
class Component
{
public:
    Component(string companyName)
    {
        cout<<"Construct detail"<<endl;
        this-> companyName = companyName;
    };
    string companyName;

};
class GPU : public Component 
{
public:
     GPU(string companyName):Component(companyName)
     {
        cout<<"construct GPU"<<endl;
     };
};
class Memory : public Component 
{
public:
    Memory(string companyName):Component(companyName)
    {
        cout<<"construct Memory"<<endl;
    };
};
class GraphicCard: public GPU, public Memory
{
public: 
    GraphicCard(string GPUcompanyName, string MemoryCompanyName):GPU(GPUcompanyName),Memory(MemoryCompanyName)
    {
        cout<<"construct GraphicCard"<<endl;
    };
};
//ромбовидное наследование 
class Character
{
public: 
    Character()
    {
        cout<<"construct character()"<<endl;
    };
    int HP;
};
class Warrior : public virtual Character                /////использование virtual для ромбовидного наследования
{
public:
    Warrior()
    {
        cout<<"construct warrior()"<<endl;
    };
};
class Orc : public virtual Character
{
public: 
    Orc()
    {
        cout<<"construct orc()"<<endl;
    };
};
class OrcWarrior: public Orc, public Warrior
{
    OrcWarrior()
    {
        cout<<"construct OrcWarrior"<<endl;
    };
};
int main()
{
    setlocale(LC_ALL,"");

    GraphicCard gc("Amd","Samsung");

    return 0;
}

//структура при виртуальном(ромбоивидном) наследовании 
/*
      character 
    /          \
Warrior        Orc
    \          /
      OrcWarrior

*/