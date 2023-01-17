#include <iostream>
#include <ctime>

using namespace std; 

int Sum(int);

int main(){

    Sum(10);

    return 0;
};

int Sum (int a){ // рекурсия 
if (a<1){           // условия когда рекурсия должна закончиться
    return 0;
}
    a--;            //декремент уменьшающий a
    return Sum(a);  //возврат нового a

};