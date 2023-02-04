#include <iostream>
#include <cstring>
using namespace std;

class Image{

    public:
    void GetImageInfo(){
        for(int i = 0; i<LEGHT; i++){
           cout<<pixels[i].GetInfo()<<endl;

        };
    };
    private: 
    class Pixel{
        public:
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
    	
    Image img;
    img.GetImageInfo();
    return 0;
}
