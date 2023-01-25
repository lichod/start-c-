#include<iostream>

using namespace std; 

int main(){

     int a = 5; 

     int *pa = &a;

     int &aRef = a; 
    
    cout<<aRef<<endl;

    return 0;
};