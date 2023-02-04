#include <iostream>
#include<cstring>
using namespace std;
class Myclass{
    private:
    int* data; //создание динамической памятии нужно обязательно удалить(использовать delete[])
    public:
    Myclass(int size){   //конструктор класса
        data = new int[size];
        for(int i = 0; i<size; i++){
            data[i] = i;
        }
        cout<<"Start construckt"<<endl;
        cout<<"data "<<data<<endl;
    }
    ~Myclass(){ //деструктор класса ~
    delete [] data;  //обязательное удаление, чтобы убрать утечку информации 
    cout<<"Start destruckt"<<endl;
    }
};
void fun(){  //функция используется для области действия деструктора определенной области 
    cout<<"start function"<<endl;
    Myclass a(5);
    cout<<"stop function"<<endl;
}
int main(){
    fun();
    
    return 0;
}