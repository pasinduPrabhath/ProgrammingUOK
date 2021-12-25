#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    FILE *p1;
    int Wcount = 1, Ccount = 0;
    char c;

    p1 = fopen("test.txt", "r");
    c = fgetc(p1);
    while(c != EOF)
    {
        if(c == ' ' || c == '\n')
        {
            Wcount++;
        }
        else
        {
            Ccount++;
        }
        c = fgetc(p1);
    }

    fclose(p1);
    cout<<"The number of words in the file test.txt are: "<<Wcount<<"\n"<<"The number of characters in the file test.txt are: "<<Ccount<<endl;
}