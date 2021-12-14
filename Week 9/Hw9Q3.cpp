#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double *d_var, *d_array;


    d_var = new double;
    d_array = new double[10];

    *d_var = 1.0;

    for(int i = 0; i < 10; i++)
    {
        d_array[i] = *d_var;
    }
    
    delete d_var;
    delete[] d_array;
}