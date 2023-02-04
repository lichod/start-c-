#include<iostream>
#include<cstring>

using namespace std;
class A
{
private: 
    string msg;
public:
   A()              //вызов конструктора 
   {
    msg = "Void message";
   };
   A(string msg)
   {
       this->msg = msg;
   };
   void Printmsg(){
    cout<<msg<<endl;
   };

};

class B : public A              //наследование класса 
{
    public:
    B() : A("our new message")                   //вызов базового конструктора 
    {
        
    };

};
int main()
{
    B c;
    c.Printmsg();
    return 0;
}