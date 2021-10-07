#include<iostream>
 
using namespace std;
 
int fibonacci(int i)
{
    if((i==1)||(i==0))
    {
        return(i);
    }
    else
    {
        return(fibonacci(i-1)+fibonacci(i-2));   
    }
}
 
int main()
{
    int n,i=0;

    cout<<"Input the number of terms for Fibonacci Series:";
    cin>>n;
    cout<<"\nFibonacci Series is as follows\n";
 
    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }
 
    return 0;
}