#include <iostream>
#include<cstring>
using namespace std;

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
{   public:     //доступно при любом условии
    int x;
    void Print(){           //использование функции для обращения к private and protected

        cout<<"x "<<x<<"\n"<<"y "<<y<<"\n"<<"z "<<z<<endl;
    };
    protected: //доступно при наследовании 
    int y;
    private: //обращение через get or set =)
    int z;
};
int main(){

    Point p;
    p.x = 5;
    p.Print();
    return 0;
}