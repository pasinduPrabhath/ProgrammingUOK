#include <iostream>
using namespace std;

int integerPower(int base, int exponent);

int integerPower(int x, int y)
{
    int i =0, value = 1;

    while(i < y)
    {
        value = value * x;
        i++;   
    }
    cout<<x<<" ^ "<<y<< " : "<<value;
}

int main()
{
    int base,base2, exponent,exponent2;
    
    cout<<"Input the value for base : "<<endl;
    cin>>base;

    cout<<"Input the value for exponent : "<<endl;
    cin>>exponent;

    cout<<"Input the value for base : "<<endl;
    cin>>base2;

    cout<<"Input the value for exponent : "<<endl;
    cin>>exponent2;

    while(exponent <= 0)
    {
        cout<<"Wrong value, input non zero positive integer again : ";
        cin>>exponent;
    }

    integerPower(base,exponent);
    cout<<endl;
    integerPower(base2,exponent2);
}

