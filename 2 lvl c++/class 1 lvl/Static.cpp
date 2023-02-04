#include <iostream>
#include <cstring>
using namespace std;


class Apple;

class Human{
public:
    void TakeApple(Apple &apple);
};


class Apple{
    
private: 
    int weight;
    string color;

public:
    Apple(int weight, string color){
        this->color = color;
        this->weight = weight;
        count++;//при каждом вызове класса apple  будет увеличваться count на 1 
    }
    static int count;                           //вызов static
    friend void Human::TakeApple(Apple &apple);
};

int Apple::count = 0;                   //инициализация статика вне класса 

int main(){
    Apple apple(150,"Red");
    cout<<apple.count<<endl;
    return 0; 
}
void Human::TakeApple(Apple &apple){            //метод обращения к параметрам Apple класса
        
        cout<<"TakeApple"<<"weight = "<<apple.weight<<"color = "<<apple.color<<endl;
};