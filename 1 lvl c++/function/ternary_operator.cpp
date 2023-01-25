#include <iostream>

using namespace std;

int main(){
    int a;
    cout<<"Please input a"<<endl;
    cin>>a;
    /*
    if(a < 10){
        cout<<"a < 10"<<endl;
    }
    else{
        if(a == 10){
            cout<<"a = 10"<<endl;
        }
        else{
            cout<<"a > 10"<<endl;
        }
    */
    ( a < 10 ) ? (cout<<"a < 10"<<endl ) : (a == 10)? (cout<<"a = 10"<<endl) : (cout<<"a < 10" <<endl);//в данной ситуации используется тернарный оператор ? он задает вопрос истина это и явялется if . :выступает как elese
    return 0;       //структура сверху равносильна структуре снизу!       // использование ?: заменяет схему if else;
}