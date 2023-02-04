#include <iostream>
#include<cstring>
using namespace std;
class Indexer{
    private:
    
    int arr[5]{12,59,90,105};
    
    public:
    int & operator[](int index){   //оператор индексирования 
        return arr[index];
        
    };
};
int main(){
    Indexer a;
    cout<<a[1]<<endl;
    return 0;
}