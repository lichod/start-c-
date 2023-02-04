#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
//библиотеки по работе с файлами
//fstream 
//ofstream
//ifstream

int main()
{
    string path = "Myfile.txt";
    ofstream fout;   //создание класса по работе с файлами
    
    fout.open(path,ofstream::app);  //использование метода опен для создания файла txt,использование ofstream::app для дописывания данных в конец файла 
    
   if(!fout.is_open())
   {
    cout<<"Error open file"<<endl;
   }
   else 
   {
    cout<<"Please input number"<<endl;
    for(int i = 0; i<5; i++)
    {
        int number; 
        cin>>number;
        fout<<number;
        fout<<"\n";
    };
   }

    fout.close();   //закрытие файла

return 0;
};