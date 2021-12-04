#include <iostream>
using namespace std;

int main()
{
    int input;

    cout<<"enter the value : ";
    cin>> input;

    int *ptr = &input;

    cout<<"Value is : "<<*ptr<<endl;
}