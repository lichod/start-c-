#include <iostream>
#include <cstring>
using namespace std; 


int main(){
    char result[255]{};
    char str1[255] = "Hello";
    char str2[255] = "world";
    strcat(result ,str1);
    strcat(result, str2);
    cout<<result<<endl;
    return 0;
}