#include <iostream>
#include <ctime>

using namespace std;

int main(){
    const int ROWS = 4;   // строки в двумерном массиве. 
    const int COLS = 3;    //  колонки в двумерном массиве.

    int array_2d[ROWS][COLS];  
    
    for (int rows = 0; rows<ROWS; rows++){          // инициализация строк в двумерном массиве.

        for(int cols = 0; cols<COLS; cols++){       //  инициализация колонок в двумерном массиве.

            array_2d[rows][cols] = rand()%10;
        };


    };
    
        for (int rows = 0; rows<ROWS; rows++){          // вывод строк и колнок  в двумерном массиве через цикл .

            for(int cols = 0; cols<COLS; cols++){           

            cout<<array_2d[rows][cols]<<"\t" ;
        };

        cout<<endl;                                    //переход на следующую строку 
    };
    

    int a ; 
    a = 0;
    system("pause");
    return 0;
};