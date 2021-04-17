#include <iostream>
using namespace std;

class operasi{
	private:
	double x,y;
	public:
	operasi(double nx, double ny){
	x=nx;
    y=ny;
    }

    double Printsum(){
        return(x+y);
    }
};

int main(){

	double num1,num2,num3,num4,real,imagin;

	cout<< "real1: ";
	cin>> num1;
	cout<< "imagin1: ";
	cin>> num2;
    operasi number1(num1,num2);

	cout<< "real2: ";
	cin>> num3;
	cout<< "imagin2: ";
	cin>> num4;
	operasi number2(num3,num4);

    cout<<number1.Printsum()<<" + "<<number2.Printsum()<<"i"<<endl;
    return 0;
}