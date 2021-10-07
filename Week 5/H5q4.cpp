#include<iostream>
using namespace std;

int recursive(int N)
{
    int n1=0,n2=1, nextOne,i = 0;

    cout<<n1<<", "<<n2;
    
    nextOne = n1 + n2;

    while (i < N-2)
    {
        cout<<", "<<nextOne;
        n1 = n2;
        n2 = nextOne;
        nextOne = n1 + n2;
        i++;
    }
    return 0;
}

int main()
{
    int N;
    cout<<"Enter the number : ";
    cin>>N;
    recursive(N);
}