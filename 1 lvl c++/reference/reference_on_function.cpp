#include <iostream>
#include <cstring>
using namespace std;
string Get_BaseFromBd(){
    return "Base from Bd";
}
string Get_BasefromWebserver(){
    return "Base from web server";
}
void ShowInfo_string(string(*fun)()){  //функция которые выводит данные через указатель по типу функций string;
    	cout<<fun()<<endl;
}
int main(){

   ShowInfo_string(Get_BaseFromBd);

    return 0;
}