#include <iostream>
#include <cstring>
using namespace std;
void function(const char *str){

    cout<<strlen(str)<<endl;
}
int main(){

   // char *string = "Hello";

    //cout<<string<<endl;

   // char *strArr[] = {"Hello","World"};
    //for(int i = 0; i<2; i++){
    //   cout<<strArr[i]<<endl;
   // }
    const char *str = "Hello";
    function(str);

    return 0;
}
