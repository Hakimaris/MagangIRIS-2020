#include <iostream>
using namespace std;

class operasi{
	public:
	int a,b;
	operasi(int first,int second){
		a=first; 
		b=second;
	}
    int tambah(){
		return a+b;
	}
};


int main (){
	int num1,num2;
	cin>>num1;
	cin>>num2;
	operasi jumlah(num1,num2);
	cout<<jumlah.tambah();
	return 0;
}