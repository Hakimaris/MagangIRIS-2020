#include <iostream>
using namespace std;

class bentuk {
    public:
    double width, height;
	void set (double a, double b) // bentuk punya panjang dan lebar
	{
		width = a;
		height = b;
	}
};

class Rectangle: public bentuk{ // rumus luas kotak
    public:
	double luas (){
		return (width * height);
	}
};

class Triangle: public bentuk{ //rumus luas segitiga
    public:
	double luas (){
		return (width * height / 2);
	}
};

int main (){

	Rectangle kotak;
	Triangle segi3;

	kotak.set(10,9); //panhang dan lebar dimasukin
	segi3.set(7,1);

	cout <<kotak.luas()<<endl; //ngeluarin hasil
	cout <<segi3.luas()<<endl; //ngeluarin hasil
	return 0;
}