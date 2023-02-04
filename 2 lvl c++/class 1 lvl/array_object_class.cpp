#include <iostream>
#include <cstring>
using namespace std;

class Pixel{
    public:
    Pixel(){
        r = 0;
        g = 0;
        b = 0;
    };
        Pixel(int r,int g, int b){
            this-> r = r;
            this-> g = g;
            this-> b = b;
        };
        string GetInfo(){
            return "Pixel : r = "+to_string(r)+" g = "+to_string(g)+" b = "+to_string(b);
        }
    private:
        int r;
        int g;
        int b;
    };

class Image{

    public:
    void GetImageInfo(){
        for(int i = 0; i<LEGHT; i++){
           cout<<pixels[i].GetInfo()<<endl;

        };
    };
    private: 
    static const int LEGHT = 5;
    Pixel pixels[LEGHT]{

        Pixel{5,10,12},
    	Pixel{12,18,20},
        Pixel{14,17,20},
        Pixel{29,39,49},
        Pixel{45,99,66},
    };

};



int main(){
  /*  const int LEGHT = 5;
    //Pixel p(22,33,55);                               //статические массивы
    Pixel arr[LEGHT];
    arr[0] = Pixel(99,25,20);
   cout<<arr[0].GetInfo()<<endl;
   */
  int leght = 5 ;   //размер динаического массива 
  Pixel *arr = new Pixel[leght];   //создание динамического массива
  arr[0] = Pixel(14,22,90);         //присваивание значения в поля массива 
  cout<<arr[0].GetInfo()<<endl;    
  delete[] arr;                   //очистка памяти 
    return 0;
}
