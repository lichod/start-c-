#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//обработка исключительной ситуаций tru catch()


int main()
{
    string path = "Myfile.txt";

    ifstream fin;  
    fin.exceptions(ifstream::badbit | ifstream::failbit);      //ifstream::badbit | ifstream::failbit при ошибке будем получать информацию
    try
    {
      cout<<"Open file...."<<endl;
       fin.open(path);
       cout<<"File open!"<<endl;
    }
    catch(const ifstream::failure & ex)       //класс exceprion забирает информацию и показывает что пошло не так
    {
       cout<<ex.what()<<endl;  //показывает ошибку
       cout<<ex.code()<<endl; //показывает тип ошибки 
       cout<<"Error open file"<<endl;
    }
    

    
    return 0;
}