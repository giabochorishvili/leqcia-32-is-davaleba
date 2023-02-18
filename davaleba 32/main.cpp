#include <iostream>
using namespace std;

class Square{
    int lengh;
    int width;

    public:

    int getlengh(){
        return lengh;
    }
    int setlengh(int x){
        lengh = x ;
    }

    int getwidth(){
        return width;
    }
    int setwidth(int y){
        width = y;
    }

};



int main(){
    Square  square;
    square.setlengh(100);
    square.setwidth(200);
    cout << "perimetri aris:  "<< (square.getlengh()+square.getwidth())*2<<endl;


    cin.get();
    return 0;
}