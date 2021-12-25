#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    FILE *p1;
    int count = 0;
    char c;

    p1 = fopen("test.txt", "r");

    for (c = getc(p1); c != EOF; c = getc(p1))
        if (c == '\n')
            count++;   
    fclose(p1);
    cout<<"The lines in the file test.txt are: "<<count<<endl;
}    