#include<iostream>
#include<string>

using namespace std;

class Myclass
{
public:
    void PrintMessage();
};

void Myclass::PrintMessage(){          //определение метода вне класса
    cout<<"Hello"<<endl;
};

int main(){
    Myclass p;
    p.PrintMessage();

    return 0;
}