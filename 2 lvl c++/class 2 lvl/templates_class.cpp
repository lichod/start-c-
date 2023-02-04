#include <iostream>
#include <cstring>
using namespace std;

//шаблоны классов 

class Point
{
public: 
    Point()
    {
        x = y = z = 0;
    }
    Point(int x, int y, int z)
    {
        this-> x = x;
        this-> y = y;
        this-> z = z;
    }
private:
    int x;
    int y;
    int z;
};




template<typename T1, typename T2>      //создание шаблонного класса вместо typename можно заменить class
class Myclass
{
public:
    Myclass(T1 value,T2 value2)
    {
        this-> value = value;
        this-> value2 = value2;
    }
    void DataTypeSize()
    {
        cout<<sizeof(value)<<endl;
        cout<<sizeof(value2)<<endl;
    }

private:
    T1 value;
    T2 value2;
};
int main()
{
    int a = 5;
    Point point;

    Myclass<int,Point> popc(a,point);     //создание шаблонного класса
    popc.DataTypeSize();

    return 0;
}