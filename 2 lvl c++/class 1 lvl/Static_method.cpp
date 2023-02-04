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
    int Id;
    static int count;
public:
    Apple(int weight, string color){
        this->color = color;
        this->weight = weight;
        count++;    //при каждом вызове класса apple  будет увеличваться count на 1 
        Id = count;
    }
    int GetId(){
        return Id;
    }
    static int Getcount(){      //статический мтод обращение 
        return count;
    }
    //static int count;                           //вызов staticn в паблике жесткая уязвимость 
    friend void Human::TakeApple(Apple &apple);
};

int Apple::count = 0;                   //инициализация статика вне класса 

int main(){
    Apple apple(150,"Red");
    cout<<apple.Getcount()<<endl;
    return 0; 
}
void Human::TakeApple(Apple &apple){            //метод обращения к параметрам Apple класса
        
        cout<<"TakeApple"<<"weight = "<<apple.weight<<"color = "<<apple.color<<endl;
};