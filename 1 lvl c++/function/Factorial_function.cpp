#include <iostream>

using namespace std; 

int Fact (int N){           //создание рекурсии 
    if(N == 0)
        return 0;
    if(N == 1)
        return 1;
    return N * Fact(N - 1);
}

int main(){

    cout<<Fact(6)<<endl;

    return 0;
};