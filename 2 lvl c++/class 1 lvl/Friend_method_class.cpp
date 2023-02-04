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
    }
    friend void Human::TakeApple(Apple &apple);
};

int main(){
    Apple apple(150,"Red");
    Human human;
    human.TakeApple(apple);
    return 0; 
}
void Human::TakeApple(Apple &apple){
        
        cout<<"TakeApple"<<"weight = "<<apple.weight<<"color = "<<apple.color<<endl;
};