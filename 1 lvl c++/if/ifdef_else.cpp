#include <iostream>
#define DEBUG //при комментировании директива дебаг перестает во всем коде работать при условии ifdef endif удобно чтобы не комментрировать отдельно каждые части 
using namespace std;
int main(){

    #ifdef DEBUG //работает при объявлении директивы debug
    cout<<"Debug Finished"<<endl;
    #else 
    cout<<"Debug no definished"<<endl;
    #endif

    //#ifndef// ивертированный ifdef
    //#if// работает как обычный if  можно стави ть условия в наименовании директивы DEBUG 5; потом использовать в коде как условие #if DEBUG<4;
    return 0; 
}