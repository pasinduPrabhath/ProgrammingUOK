#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    FILE *p1;
    char word[1000];

    p1 = fopen("test.txt", "r");

    cout<<"The content of the file test.txt is:"<<endl;
    printf("%s",fgets(word,100,p1));
    fclose(p1);

}
