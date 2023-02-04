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
    coffe_grinder coffemechanik;
    coffemechanik.start();
    
    return 0;
}