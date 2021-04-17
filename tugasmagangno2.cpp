#include <iostream>
using namespace std;

class mother{
public:
	void display ()
	{
		cout << "";
	}
};

class daughter : public mother{
public:
	void display ()
	{
		cout << "daughteru: emak dimana aaaaaaaaaaaa";
	}
};

int main (){
	//mother inem;
	//inem.display();
	
	daughter santi;
	santi.display(); 
	return 0;
}