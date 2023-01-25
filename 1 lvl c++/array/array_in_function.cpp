#include<iostream>

using namespace std;


void FillArray(int arr[], const int size){          //функция по генерации данных в массиве;

    for(int i = 0; i<size; i++){

            arr[i] = rand()%10;
    };
};

void OutputArray(int arr[], const int size){          //функция по выводу данных из массива;

    for(int i = 0; i<size; i++){

           cout<<arr[i]<<endl;
    };
};

int main(){

    const int SIZE = 10; 

    int arr[SIZE];
    FillArray(arr, SIZE);
    OutputArray(arr, SIZE);

    return 0 ; 
};

