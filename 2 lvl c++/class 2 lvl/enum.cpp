#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class PC
{
public:
enum PCState
{
    OFF,
    ON,
    SLEEP,

};
    PCState GetState() 
    {
        return State;
    }
    void SetState(PCState State)
    {
        this->State = State;
    }
private: 
    PCState State;
};

int main()
{
    PC pc;

   pc.SetState(PC::PCState::ON);
   /* if(pc.GetState() == PC::PCState::ON)
    {
        cout<<"PC Work"<<endl;
    }
    */
   switch (pc.GetState())
   {
        case PC::PCState::OFF:
        cout<<"PC OFF"<<endl;
            break;
         case PC::PCState::ON:
        cout<<"PC ON"<<endl;
            break;
         case PC::PCState::SLEEP:
        cout<<"PC SLEEP"<<endl;
            break;
   }
    return 0;
};
