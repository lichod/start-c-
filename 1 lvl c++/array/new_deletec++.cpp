#include <iostream>

using namespace std; 


int main(){
    int *pa = new int; 

    *pa = 10;
    cout<<"a"<<*pa<<endl;
    delete pa;
    
    pa = nullptr;

    return 0 ; 
}