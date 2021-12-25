#include <stdio.h>
#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    string sent[4];
    fstream fl;
    fl.open("test.txt", ios::in);

    for(int i = 0; i < 4; i++)
    {
        getline(fl,line);
        sent[i] = line;
        cout<<sent[i]<<endl;
    }
    fl.close();
   
}