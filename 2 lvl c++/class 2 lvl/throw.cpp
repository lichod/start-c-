#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//обработка исключительной ситуации throw()

void fun(int value)
{
    if(value < 0)
    {
        throw exception();   //выбрасывает ошибку 
    }
    

    cout<<"Fun a "<<value<<endl;
};

int main()
{
    try
    {
        fun(-55);
    }
    catch(const exception & ex)
    {
        cout<<"We catch ex "<<ex.what()<<endl;
    }
    
    return 0;
}