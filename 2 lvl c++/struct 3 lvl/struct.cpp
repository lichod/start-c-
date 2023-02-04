#include <iostream>
#include <cstring>
using namespace std; 

//структуры struct
class Myclass
{
    int a = 10;
};
class Myclass2 : public Myclass //по умолчанию private 
{

};


struct Mystruct //в отличии от класса по умолчанию поля являются public
{
    int a = 22; 

};
struct Mystruct2:Mystruct //по умолчанию :public Mystruct 
{
    
};
int main()
{
    Myclass2 mc2;

    Mystruct2 ms2;

    ms2.a;
    return 0;
}