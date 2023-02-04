#include<iostream>
#include<cstring>

using namespace std;
class A
{
public:
    string msgOne = "Message one";
    
private: 
    string  msgTwo = "Message Two";

protected:
    string msgThree = "Message three";

};

class B : public A
{
    public:
    void PrintMsg()
    {
        cout<<msgOne<<endl;
    }
};
int main(){
    B b;
    b.PrintMsg();

    return 0;
}