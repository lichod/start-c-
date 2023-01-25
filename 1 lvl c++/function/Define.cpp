#include<iostream>
#define PI 3.14
#define tab "\t"
#define FUN(x,y)((x)*(y)) //организация функции в виде макроса 
using namespace std; 

int main(){
    cout<<FUN(5,6)<<tab;
    cout<<PI<<endl;
    return 0; 
}