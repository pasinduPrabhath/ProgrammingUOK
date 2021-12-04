#include <iostream>
using namespace std;

int findfactorial(int num, int *fact);
int x =0;

int main()
{
    int num,fact,sum;
    cout<<"enter the number : ";
    cin>>num;
    
    findfactorial(num, &fact);
}

int findfactorial(int num, int *fact)
{
    *fact = 1;

    for(int i = 1; i <= num; i++)
    {
        *fact = i * *fact;
    }
    
    x = 6;

    if(x>5)
    {
        
        return 1;
    }

    cout<<"Factorial of "<<num<<" is : "<<*fact;
}