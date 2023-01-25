#include <iostream>

using namespace std; 

int main(){
     const int SIZE = 5; 

     int arr[SIZE]{1,2,4,5,6};
    for(int i = 0; i<SIZE; i++){
        arr[i];
        cout<<arr[i]<<endl;
    }

    int *Parr = arr; 
    for(int i = 0; i<SIZE; i++){
        
        cout<<Parr[i]<<endl;
    }


    return 0;
};