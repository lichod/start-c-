#include <iostream>
#include <ctime>
using namespace std; 

int main(){

   // int arr[5];   //{1,2,3,4};
   // arr[0] = 5; 
   // arr[1] = 6; 
   // arr[2] = 7;
   //arr[3] = 8;
   //arr[4] = 9;
    //cout<<arr[2]<<endl;
    const int SIZE = 10; 

    int arr[SIZE]; 
    srand(time(NULL));
    for(int i = 0 ; i <SIZE; i++){
        
        arr[i] = rand() % 15 + 15;
        cout<<"I = "<<i<<" "<<arr[i]<<endl; 

    };

    return 0 ;
};