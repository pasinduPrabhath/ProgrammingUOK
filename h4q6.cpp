#include <iostream>
using namespace std;

int findscf()
{
int i, num1, num2, min, scf = 1;

    cout<<"Input any 2 numbers :";
    cin>>num1;
    cin>>num2;

  min = (num1<num2) ? num1 : num2;

    for(i=1; i==2; i++)
    {
        if(num1 % i ==0 && num2 % i ==0)
        {
            scf = i;
        }
    }

    cout<<"SCF of "<<num1<<" and "<<num2<<" is "<<scf;
}

int main()
{
    findscf();
}