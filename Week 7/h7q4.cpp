#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    char input1[100], input2[100];
    int result;

    cout<<"Enter input 1 : ";
    cin>>input1;
    cout<<"Enter input 2 : ";
    cin>>input2;

    result = strcmp(input1, input2);

    cout<<"first string is";
    
    if(result == 0)
    cout<<" equal to second string."<<endl;

    if(result > 0)
    cout<<" greater than second string."<<endl;

     if(result < 0)
    cout<<" less than second string."<<endl;

    return 0;
}