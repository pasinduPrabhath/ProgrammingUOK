#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int input;

    cout<<"Input the number : ";
    cin>>input;

    ptr = &input;
    cout<<"Number is : "<<*ptr;
}