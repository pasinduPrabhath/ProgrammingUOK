#include <iostream>
using namespace std;

int main()
{
    int input;
    int *pntr;

    cout<<"enter the value : ";
    cin>> input;
    
    pntr = &input;
    cout<<"Memory adress : "<<pntr;
}