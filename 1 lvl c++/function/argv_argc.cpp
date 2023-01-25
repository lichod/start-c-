#include <iostream>
using namespace std;
//argc количество аргументов 
//argv[] массив указатель на чар, описание команд
int main(int argc, char* argv[]){

    for (int i = 0; i<argc; i++){

        cout<<argv[i]<<endl;   //определение адресса при компиляциии программы 
    }
    
}