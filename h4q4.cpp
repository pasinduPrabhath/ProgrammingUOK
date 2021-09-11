#include <iostream>
using namespace std;

int main()
{
    int n;//N
    int num = 0,min;
    
    cout<< "Input number of elements : "<<endl;
    cin>>n;
    int numbers[n];

    for(int i = 0; i < n; i++)
    {
        cout<<"Input number : ";
        cin>>num;
        numbers[i] = num;
    }

    min = numbers[0];

    for(int i = 0; i < n; i++)
    {
        if(numbers[i]<min)
            min = numbers[i];
    }
    


    cout<<"Smallest number is : "<<min;
}