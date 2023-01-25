#include<iostream>

using namespace std; 

int main(){

    //                 Symbol                //
    ///////////////////////////////////////////

    wchar_t name = 'C'; //wchar_t using thread wcout
    char user_name = 'g'; 
    char16_t gamespace = 'u';
    char32_t nouspace = 'r';
    wcout<<(char)name<<user_name<<(char)gamespace<<(char)nouspace<<endl;
    
    //              Intege types               //
    /////////////////////////////////////////////
    int block_a = 10;
    unsigned int block_c = 20;
    short block_b = -10;
    unsigned block_h = 15;
    long block_d = 143;
    unsigned long block_e = -16;
    long long block_g = 196;
    
    //         floaring point types         //
    /////////////////////////////////////////

    float block_l = -10.85;
    double block_k = 0.456;
    long double block_n = 0.4566540907983;
    //             sizeof()             //
    //////////////////////////////////////

    long double bloc_n = 2;
    
    cout<<"sizeof(bloc_n)"<<sizeof(bloc_n)<<endl;

    //             constant            //
    //////////////////////////////////// 
    const int bloc_c = 10;

    return 0;
};