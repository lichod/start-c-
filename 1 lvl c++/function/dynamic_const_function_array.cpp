#include<iostream>

using namespace std; 
void FillArray(int* const arr, const int size){
   
   for(int i = 0; i<size; i++){
    arr[i] = rand()%10;
   }
}

void ShowArray(const int* const arr, const int size){
    for(int i = 0; i<size; i++){

        cout<<arr[i]<<"\t";
    }
    cout<<endl;


}



int main(){
     int size = 10; 
    int *FirstArray = new int [size];
    int *secondArray = new int [size];

    FillArray(FirstArray, size);   //вызов функции по заполнению массива
    FillArray(secondArray, size); 


    cout<<"First Array "; //вызов функции по выводу данных из массива 
    ShowArray(FirstArray,size);
    cout<<"Second array ";
    ShowArray(secondArray,size);
    
    delete [] FirstArray;
    FirstArray = new int[size];
    for(int i = 0; i<size; i++){
        FirstArray[i] = secondArray[i];  // копирование массива в другой 

    }

    cout<<"================================================================\n";

    cout<<"First Array "; //вызов функции по выводу данных из массива 
    ShowArray(FirstArray,size);
    cout<<"Second array ";
    ShowArray(secondArray,size);





    delete[] FirstArray;
    delete[] secondArray;


    return 0; 
}