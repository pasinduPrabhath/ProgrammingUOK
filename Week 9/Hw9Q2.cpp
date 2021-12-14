#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double *d_var;

    d_var = new double;


    cout<<"Input value : "<<endl;
    cin>>*d_var;
    cout<<*d_var;

}