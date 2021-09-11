#include <iostream>
using namespace std;

int main(){

    int sum = 0, input =0, number = 1;
    double num = 0;//to get numbers greater than 10
    double Avg, n = 0;

    cout<< "Input number"<<endl;
    cin>>n;

    while(n < 0)//to check validity of N.
    {
        cout<< "Input valid number if inputs : "<<endl;
        cin>>n;
    }

    while(number <= n)
    {
        cout<<"Input Number of Values "<< number<<": ";
        cin>>input;

        if(input>10)
        {
            sum = sum + input;  
            num++;//taking the total number of numbers greater than 10 to find correct average        
        }

        number++;
    }
    
    Avg = sum/num;
    cout << "Average is :"<<Avg;
    return 0;
}