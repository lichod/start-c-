#include <iostream>
#include <ctime>
using namespace std; 

int main(){

    const int SIZE = 10; 

    int arr[SIZE]; 
    srand(time(NULL));
    for(int i = 0 ; i <SIZE; i++){
        
        arr[i] = rand() % 15 + 15;
        cout<<"I = "<<i<<" "<<arr[i]<<endl; 

    };

    int minValue = arr[0]; 
    
    for(int i = 0 ; i < SIZE;i++){
        
        if(arr[i]<minValue){
            minValue = arr[i];
        }
    };
    cout<<"min Value "<<minValue<<endl;

    return 0 ;
};