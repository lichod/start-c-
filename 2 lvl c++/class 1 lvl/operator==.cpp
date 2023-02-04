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
{   private:     //доступно при использовании геттера либо сеттера
    int x;
    int y;
    public:
    Point(){
        x = 0;
        y = 0; 
        cout<<this<<"start construct"<<endl;
    }
    Point(int x, int y){
        this -> x = x;
        this -> y = y; 
        cout<<"construct"<<this<<endl;
    }
    bool operator ==(const Point &other){                   //перегрузка оператора ==
       return this->x == other.x && this->y == other.y;
     
    }
      bool operator !=(const Point &other){                 //перегрузка оператора !=
       return !(this->x == other.x && this->y == other.y);
     
    }
    int Get_X(){ //получает и выводит значение
        return x;
    };
    int Get_y(){
        return y;
    };
    void Set_X(int value_x){  //изменяет значение
     x = value_x; //устанавливаем значение для поля x
    };
    void Set_y(int value_y){
        y = value_y;
    };
    void Print(){
        cout<<"x = "<<x<<"\nY = "<<y<<endl;
    };
};  

class coffe_grinder
{
private: 
    bool check_voltage(){
        return true;
    };


public: 
void start(){
    bool VoltageNormal = check_voltage();

    VoltageNormal?cout<<"Vjuhh"<<endl:cout<<"Beep"<<"BEEP"<<endl;

};
};

int main(){
   Point a(5,15);
   Point b(22,33);
   bool result = a == b;
    return 0;
}