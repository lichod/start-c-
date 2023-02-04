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
    Point(){  //конструктор по умолчанию
        x = 0; 
        y = 0;
    };
   Point(int value_x, int value_y){ //создали конструктор по типам данных из private, используется чтобы было нельзя создавать класс без данных чтобы не попасть в другие части памяти!
        x = value_x;
        y = value_y;
    };
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
   Point p;
   p.Print();
   Point pp(10,22); //Используется перегрузка конструктора 
   pp.Print();
    
    return 0;
}