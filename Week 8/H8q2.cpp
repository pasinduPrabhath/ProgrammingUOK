#include <iostream>
using namespace std;

int main()
{
    int input;

    cout<<"enter the value : ";
    cin>> input;

    int *ptr = &input;
    int **newptr = &ptr;

    cout<<newptr;
}