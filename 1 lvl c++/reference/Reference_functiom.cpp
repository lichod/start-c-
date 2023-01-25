#include <iostream>

using namespace std; 
void Functions(int &a, int &b, int &c){
    a = 15; 
    b *=2;
    c -=5;


}
int main(){
    int a,b,c; 
    a = 10;
    b = 5;
    c = 20;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<"\n"<<endl;
    Functions(a,b,c);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;


    return 0;
}