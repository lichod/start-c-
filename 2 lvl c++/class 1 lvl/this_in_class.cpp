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
   Point(int x, int y){ //создали конструктор по типам данных из private, используется чтобы было нельзя создавать класс без данных чтобы не попасть в другие части памяти!
       this->x = x;
       this->y = y;
        
    };
    int Get_X(){ //получает и выводит значение
        return x;
    };
    int Get_y(){
        return y;
    };
    void Set_X(int x){  //изменяет значение
     this->x = x; //устанавливаем значение для поля x //используем this для определения переменной x из множества
    };
    void Set_y(int y){
     this->y = y;
    };
    void Print(){
        cout<<"x = "<<x<<"\nY = "<<y<<endl;
        cout<<"adress "<<this<<endl;               //использование this для вывода адресса где храниться информации в памяти 
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
    Point a;
    a.Set_X(5);
    a.Print();
    
    return 0;
}