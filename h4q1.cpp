#include <iostream>
using namespace std;

int main(){

    int sum = 0, i =0, j = 1;
    double Avg, n = 0;

    cout<< "Input number of inputs : "<<endl; 
    cin>>n; //get the value of N

    while(n < 0)//to check validity of N.
    {
        cout<< "Input valid number if inputs : "<<endl;
        cin>>n;
    }

    while(j <= n)
    {
        cout<<"Input Number : "<< j<<":";
        cin>>i;
        sum = sum + i;
        j++;
    }
    
    Avg = sum/n;
    cout << "Average is :"<<Avg;
    return 0;
}