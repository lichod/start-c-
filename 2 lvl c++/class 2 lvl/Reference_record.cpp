#include <iostream>
#include <cstring>
#include <fstream>
using namespace std; 

//Перегрузка операторов потока ввода вывода << >> //

class Point
{
private: 
    int x;
    int y;
    int z;

    friend ostream& operator<<(ostream& os, const Point& point);
    friend istream& operator>>(istream& is, Point& point);

public:
    Point()
    {
        x = y = z = 0;
    };
    Point(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    };

};

ostream& operator<<(ostream& os, const Point& point) //перегрузка оператора << для работы с классами 
{
    os<<point.x<<" "<<point.y<<" "<<point.z<<endl;
    return os;
}
istream& operator>>(istream& is, Point& point)            //перегрузка оператора >> для работы с классами 
{
    is>>point.x>>point.y>> point.z;
    return is;
}

int main()
{
    //Point point(13,144,155);
    string path = "Myfile.txt";
    fstream fs;
    
    fs.open(path,fstream::in | fstream::out | fstream::app); //используется  fstream::in | fstream::out чтобы записывать и читать одновременно
    if(!fs.is_open())
    {
        cout<<"Error open file"<<endl;
    }
    else
    {
        
        cout<<"File open"<<endl;
       // fs<<point<<"\n";              //запись данных в файл
       while(!fs.eof()){
         Point point;
         fs >> point;              //получение данных из файла
         cout<<point<<endl;
       };
    }
    fs.close();
    return 0;
}