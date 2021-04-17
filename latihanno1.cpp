#include <iostream>
using namespace std;
//Write a class having two private variables and one member function which 
//will return the area of the rectangle
class Shape {
    public:
    int x,y;
    int luas(){ // bentuk punya luas
        return x+y;
    }
};

int main () {

    Shape kotak;
    cin>>kotak.x;
    cin>>kotak.y;
    cout<<kotak.luas();
    return 0;
}