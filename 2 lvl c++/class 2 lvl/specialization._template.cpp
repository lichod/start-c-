#include <iostream>
#include <fstream>
#include <cstring>
#include <typeinfo>
using namespace std;
//специализация шаблонов класса

template<typename T> //создание шаблон класса
class Printer
{
public:
    void Print(T value)
    {
        cout<<value<<endl;
    }
};
template<>          //создали специализацию шаблона класса printer,без описания запретили метод string,можем реализовать свой функционал
class Printer<string>
{
    public:
        void Print(string value)
        {
            cout<<"+++++"<<value<<"++++"<<endl;
        }
};

int main()
{
    Printer<int> printer;
    printer.Print(980);

    Printer<string> schreiben;
    schreiben.Print("Hello My dear friends!");
    return 0;
}