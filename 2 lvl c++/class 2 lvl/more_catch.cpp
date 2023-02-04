#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//обработка исключительной ситуации throw()

void fun(int value)
{
    if(value < 0)
    {
        throw "Number < 0!!!";   //выбрасывает ошибку 
    }
    if(value == 0)
    {
        throw exception();
    }
    

    cout<<"Fun a "<<value<<endl;
};

int main()
{
    try
    {
        fun(-55);
    }
    catch(exception & ex)
    {
        cout<<"We catch bloc 1:  "<<ex.what()<<endl;
    }
    catch(const char *ex)
    {
        cout<<"We catch bloc 2: "<<ex<<endl;
    }
    catch(...)        //ловит любую позицию
    {
        cout<<"Non inform of error"<<endl;
    }
    return 0;
}