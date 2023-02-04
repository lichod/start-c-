#include <iostream>
#include<cstring>
using namespace std;
class Myclass{
    private:
    int Size;                      //создание динамической памятии нужно обязательно удалить(использовать delete[])
    public:
    int* data; 
    Myclass(int size){                   //конструктор класса
       this->Size = size;
       this->data = new int[size];
        for(int i = 0; i<size; i++){
            data[i] = i;
        }
        cout<<"Start construckt"<<endl;
        cout<<"data "<<data<<endl;
    }
    Myclass(const Myclass &other){   //создание конструктора копирования
        this -> Size = other.Size;
        this -> data = new int[other.Size];
        for(int i = 0; i<other.Size; i++){
            this->data[i] = other.data[i];

        }
        cout<<"start construct copy"<<endl;
    }

    ~Myclass(){                           //деструктор класса ~
    delete [] data;                      //обязательное удаление, чтобы убрать утечку информации 
    cout<<"Start destruckt"<<endl;
    }
};
void fun(Myclass value){  //функция используется для области действия деструктора определенной области 
    cout<<"start function"<<endl;
  
}
Myclass fun2(){
    cout<<"start fun2"<<endl;
    Myclass temp(2);
    return temp;
}
int main(){
    Myclass a(1);
    fun(a);
    return 0;
}