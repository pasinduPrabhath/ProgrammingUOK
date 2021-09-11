#include <iostream>
#include <limits>
using namespace std;

int main(){

    int max = numeric_limits<int>::min(); 
    int min = numeric_limits<int>::max(); 
    int i = 1, n= 0, input = 0;

    cout<< "Input number of elements"<<endl;
    cin>>n;

     while(i <= n)
    {
        cout<<"Input Number of Values "<< i<<": ";
        cin>>input;

        if(input>max)
        {
            max = input;          
        }

        if(input<min)
        {  
            min = input;          
        }

        i++;
    }

    cout<<"Smallest number : "<<min<<"\n";
    cout<<"Largest number : "<<max<<"\n";

}