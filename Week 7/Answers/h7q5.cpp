#include <string.h>
#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char str[1000];
    //char s[50];
    char *words;
    int count = 0;

    cout<<"Input : "<<endl;
    cin>>str;
    //cout<<str;

    words = strtok(str, "-");

    while( words != NULL)
    {
        //cout<<words;
        words = strtok(NULL, "-");
        count++;
    }
    cout<<"count : "<<count;
    return 0;
}