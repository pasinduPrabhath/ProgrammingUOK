#include <iostream>
using namespace std;

int main()
{
    int _num,i,_rev = 0;
    int *num;

    cout<<"Enter the number : ";
    cin>>_num;

    num = &_num;

    while(*num > 0)
    {
        i = *num % 10;
        _rev = _rev * 10 + i;
        *num = *num / 10;
    }

    cout<<"Reverse number is : "<<_rev;
}