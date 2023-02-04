#include <iostream>
#include <cstring>
using namespace std;

class A
{
public:
    A()
    {
        
    }
    virtual ~A() = 0;                                        //создание виртуального деструктора 
};
A::~A() {};
class B: public A
{
public:
    B()                             
    {
       
    }
    ~B() override                  //вызов виртуального деструктора 
    {
        
    }
};
int main()
{
    A *btr = new B;
    delete btr;
    return 0;
}