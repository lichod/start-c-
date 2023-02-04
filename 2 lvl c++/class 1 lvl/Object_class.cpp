#include <iostream>
#include<cstring>
using namespace std;

class Human // создали переменную Human. класс шаблон описывающий переменную
{
public:

    int age;
    string First_name;
};

int main(){
    Human first_human;   //first_human обьект класса
    first_human.First_name = "Johny";
    first_human.age = 15;

    cout<<first_human.age<<endl;
    cout<<first_human.First_name<<endl;
    return 0;
}