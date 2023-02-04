#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    string path = "Myfile.txt";
    
    fstream fs;
    
    fs.open(path,fstream::in | fstream::out | fstream::app); //используется  fstream::in | fstream::out чтобы записывать и читать одновременно
    if(!fs.is_open())
    {
        cout<<"Error open file"<<endl;
    }
    else
    {
        string msg;
        int value;

        cout<<"File open"<<endl;
        cout<<"Please take 1 for record in file: "<<endl;
        cout<<"Please take 2 for read alls message from file"<<endl;
        cin>>value;

        switch (value)
        {
        case 1: 
            cin>>msg;
            fs<<msg<<"\n"<<endl;
            break;
        case 2:
            while(!fs.eof())
            {
                msg = "";
                fs>>msg;
                cout<<msg<<endl;
            }
            break;
        default:
            fs.close();
            break;
        }
    }
    fs.close();
    return 0;
};