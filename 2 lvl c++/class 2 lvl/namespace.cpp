#include <iostream>
#include <cstring>
using namespace std;
//namespace пространство одинаковых имен 
//используется если случайно совпадают две функции либо класса в разных частях кода либо программистов

namespace firsNS
{
    void fun()
    {
        cout<<"Fun firsNS"<<endl;
    }
}
namespace secondNS
{
    void fun()
    {
        cout<<"Fun secondNS"<<endl;
    }
}
 
int main()
{
   secondNS::fun();        //вызов функции из namespace secondNS :: fun();
    return 0;
}