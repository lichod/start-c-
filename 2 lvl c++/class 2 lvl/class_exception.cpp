#include <iostream>
#include <cstring>
#include <fstream>
#include <exception>
using namespace std;
//обработка исключительной ситуации throw()
class Myexception :public exception
{
private:
    int dataState;
public:
Myexception(char *msg,int dataState) :exception(msg)
    {
        this->dataState = dataState;
    };
    int GetDataState()
    {
        return dataState;
    }
};
void fun(int value)
{
    if(value < 0)
    {
        throw "Number < 0!!!";   //выбрасывает ошибку 
    }
    if(value == 0)
    {
        throw Myexception("Number = 0");
    }
    

    cout<<"Fun a "<<value<<endl;
};

int main()
{
    try
    {
        fun(0);
    }
    catch(exception & ex)
    {
        
        cout<<"We catch bloc 1:  "<<ex.what()<<endl;
    }

return 0;
}