#include<iostream>
#include<cstring>
using namespace std; 

class Human
{
public: 

    Human(string Name)
    {
        this-> Name = Name; 
        this-> Age = 0; 
        this-> Weight = 0;
    }
    Human(string Name, int Age):Human(Name)       //процесс делегирования 
    {
        this-> Age = Age; 
    }
    Human(string Name, int Age, int Weight):Human(Name,Age) //процесс делегирования 
    {
        this-> Weight = Weight;
    }

    string Name; 
    int Age; 
    int Weight;

};
int main(){
    Human human("Johny",40,105);

    return 0;
}