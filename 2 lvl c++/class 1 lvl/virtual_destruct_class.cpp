#include <iostream>
#include <cstring>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"Start dynamic data memory, object A"<<endl;
    }
    virtual ~A()                                            //создание виртуального деструктора 
    {
        cout<<"Stop dynamic data memory, Object A"<<endl;
    }
};
class B: public A
{
public:
    B()                             
    {
        cout<<"Start dynamic data memory, object B"<<endl;
    }
    ~B() override                  //вызов виртуального деструктора 
    {
        cout<<"Stop dynamic data memory, Object B"<<endl;
    }
};
int main()
{
    A *btr = new B;
    delete btr;
    return 0;
}