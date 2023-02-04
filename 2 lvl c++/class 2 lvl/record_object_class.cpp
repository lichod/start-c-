#include <iostream>
#include <cstring>
#include <fstream>
using namespace std; 

class Point
{
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
    void Print()
    {
        cout<<"X: "<<x<<"\nY: "<<y<<"\nZ: "<<z<<endl;
    };
        int x;
        int y;
        int z;
};


int main()
{
    string path = "Myfile.txt";
   // Point point(5,250,44);
    //point.Print();
    /*
    ofstream fout;

    fout.open(path,ofstream::app);
    if(!fout.is_open())
    {
        cout<<"Error open file"<<endl;
    }
    else
    {
        cout<<"File open"<<endl;
        fout.write((char*)&point,sizeof(Point));//метод записи write содержит два параметра 
    }
    fout.close();
    */

    ifstream fin;
    fin.open(path);

    if(!fin.is_open())
    {
        cout<<"Error Open file"<<endl;
    }
    else
    {
        cout<<"Open File"<<endl;
        Point pnt;
        while( fin.read((char*)&pnt, sizeof(Point)))//метод read чтение данных
        {
            pnt.Print();
        }
       
    }
    fin.close();
    return 0; 
};