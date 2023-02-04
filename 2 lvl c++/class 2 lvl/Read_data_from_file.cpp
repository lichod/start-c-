#include <iostream>
#include <cstring>
#include <fstream>
using namespace std; 
//чтение данных из файла 
int main()
{
    string path = "Myfile.txt";
    ifstream fin; //ifstream класс чтения файла
    fin.open(path);
    if(!fin.is_open())
    {
        cout<<"File error open"<<endl;
    }
    else
    {
        cout<<"File open"<<endl;
        string str; 
        while(!fin.eof())                  //вывод данных файла eof для string; get для char 
        {
            str = " ";
            getline(fin, str);         //извлечение строчек из fin
            cout<<str<<endl;         //вывод данных из файла
        }
    }
    fin.close();
    return 0; 
};