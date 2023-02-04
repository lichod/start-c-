#include <iostream>
#include<cstring>
using namespace std;

class Human 
{
public:

    int age;
    string First_name;
    void Print(){ //создание функции по выводу информации из класса
        cout<<"Name "<<First_name<<"\tage "<<age<<endl;
    };
};
class Point
{
public:
    int x;
    int y;
    int z;
};
int main(){
    Human First_human;
    First_human.age = 15;
    First_human.First_name = "Johny";
    First_human.Print(); //вызов функции по выводу информации из класса 
    return 0;
}