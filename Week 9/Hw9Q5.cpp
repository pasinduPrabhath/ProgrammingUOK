#include<iostream>
using namespace std;


struct Timer{
	int hours;
	int minutes;
};

int main()
{
	Timer *ptrTimer = new Timer();

	(*ptrTimer).hours=10;
	(*ptrTimer).minutes=20;

	cout<<"Hours "<<(*ptrTimer).hours<<endl;
	cout<<"Minutes"<<(*ptrTimer).minutes<<endl;
}
