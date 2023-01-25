#include <iostream>

using namespace std;


int main(){

    int size = 10;
    int *arr = new int[size];
    for(int i = 0; i<size; i++){
        arr[i] = rand()%10;                //заполнение данными динамического массива

    }

    for(int i = 0; i<size; i++){  //вывод динамического массива
        cout<<arr[i]<<endl;// вывод данных динамического массива
        cout<<arr + i<< endl; //вывод адрессов динамического массива
    } 
    delete [] arr; //удаление данных динамического массива

};