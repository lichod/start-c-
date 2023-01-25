#include <iostream>

using namespace std; 

void function(int *pa){

    (*pa)++;
}

int main(){

    int a = 0 ; 

    cout<<a<<endl; 

    function(&a);

    cout<<a<<endl;

    return 0;
};