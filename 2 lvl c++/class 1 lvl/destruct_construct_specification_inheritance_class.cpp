#include<iostream>
#include<cstring>

using namespace std;
class A
{
public:
   A()              //вызов конструктора 
   {
    cout<<"Start construct class A"<<endl;
   };
   ~A()
    {
        cout<<"start destruct class A"<<endl;
    };
};

class B : public A              //наследование класса 
{
    public:
    B() 
    {
        cout<<"Start construct class B"<<endl;
    };
    ~B()
    {
        cout<<"Start destruct class B"<<endl;
    };
};
class C : public B               //наследование класса от а до с 
{
    public:
    C()
    {
        cout<<"Start construct class C"<<endl;
    };
    ~C()
    {
        cout<<"Start destruct class C"<<endl;
    };
};
int main()
{
    C c;

    return 0;
}