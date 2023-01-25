#include <iostream>

using namespace std; 

int main(){
    

    int number; 
    
    cin>> number; 

    if(number > 5){

        cout<<"number than 5";
    }
    else if(number  == 5) {
        
        cout<<"number  = 5";
    }
    else{  
    cout<<"number < 5";
    };

    bool isRain = false; 
    if(isRain){
        cout<<"water street in the sound";
    }
    else {
        cout<<"sunrise my dear friend";
    };
  return 0;
};