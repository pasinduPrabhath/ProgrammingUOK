#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int *size = new int;// int size;
    int *numbers = new int[*size];// int numbers[size];
    double *max = new double;// double max;
    
    cout<<"Enter the number of elements : "<<endl;
    cin>>*size;

   for(int i = 0; i < *size; i++)
   {
       cout<<"Enter number "<<(i+1)<<": ";
       cin>>numbers[i];
   }

   *max = numbers[0];
   for(int i = 0; i < *size; i++)
   {
       if(numbers[i] > *max)
       {
           *max = numbers[i];
       }
   }

   cout<<"The Largest element is : "<<*max;
}