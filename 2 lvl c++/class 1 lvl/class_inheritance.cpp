#include <iostream>
#include <cstring>
using namespace std;

class Human            //основной класс
{
    private:
        string name = "Johny";
    public: 
        string GetName(){                    //создание геттера
            return name;
        }
        void SetName(string name){          //создание сеттера 
            this->name = name;
        }
};
class Student : public Human                      //привязывание класса human к классу студент
{
    public: 
        string group;
        void Learn(){
            cout<<"я учусь!"<<endl;
        }
};
class Professor : public Human
{
    public: 
        string subject;
};
class Extramuralstudent : public Student     //привязывание заочника с кстудентам
{
    public:
    void Learn()
    {
        cout<<"в универе реже обычного"<<endl;
    }
};
int main(){
    setlocale(LC_ALL, "");

    Student st;
    st.Learn();
    st.SetName("Joshua");       //создание имени
    cout<<st.GetName()<<endl;               //вывод имени
    Professor pr;

    Extramuralstudent extrast;
    extrast.Learn();
    return 0;
};