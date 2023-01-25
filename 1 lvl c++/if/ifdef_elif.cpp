#include <iostream>
//#define DEBUG //при комментировании директива дебаг перестает во всем коде работать при условии ifdef endif удобно чтобы не комментрировать отдельно каждые части 
using namespace std;
int main(){

    #ifdef DEBUG //работает при объявлении директивы debug
    cout<<"Strat cickle"<<endl;
    #endif

    for(int i = 0; i<5; i++){

        cout<<i<<endl;
    }

    #ifdef DEBUG //работает при объявлении директивы debug
    cout<<"end cickle"<<endl;
    #endif

    return 0; 
}