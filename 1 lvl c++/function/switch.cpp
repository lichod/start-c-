#include <iostream>

using namespace std; 

int main(){
    int a; 
    cin>> a; 

    switch(a){
        case 1: {
            cout << "nmber 1";
        }
        break ;

        default: 
        cout<<"pls number: ";
        break;

    };

    return 0;
};