#include<iostream>
#include<cstring>
using namespace std; 
class Msg    //создание класса msg и является базовым
{
private:
    string msg; 
public: 
    Msg(string msg)             // конструктор присваивания  
    {
        this->msg = msg;
    }
    virtual string GetMsg()        //создание виртуального метода 
    {     
        return msg;
    }
};
class BraketMsg : public Msg //наследование класса 
{
public: 
    BraketMsg(string msg):Msg(msg) //делегирование и вызов конструктора msg
    {

    }
    string GetMsg() override       //вызов виртуального метода из базового класс и изменение 
    {
        return "{"+ ::Msg::GetMsg() + "}";      //::Msg::GetMsg() синтаксис вызова нужного метода 
    }
};
class Printer           //создание класса по выводу информации 
{
public: 
    void  Print(Msg *msg)       //создание метода по выводу и присваиванию информации по ссылке
    {
        cout<<msg->GetMsg()<<endl;
    }
};
int main(){

    BraketMsg m("Hello my dear friends");        //создание сообщения 
    Printer prin;                           //создание класса по выводу 

    prin.Print(&m);                           // вывод информации 
    return 0;
};