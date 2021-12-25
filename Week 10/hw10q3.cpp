#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    FILE *p1;
    char word[1000];
    int current;
    int n;

    cout<<"Input the number of lines to be written :";
    cin>>n;

    //write data
    p1 = fopen("test.txt", "w");
    for(int i = 0; i < n; i++)
    {
        fprintf(p1,"test line %d \n",i+1);

    }
        
    fclose(p1);   

    //read and print data
    p1 = fopen("test.txt", "r");
    cout<<"The content of the file test.txt is:"<<endl;

    while ((current = fgetc(p1)) != EOF)
  {
    //print the character to a string
    printf("%c", current);
  }
    fclose(p1);

    return 0;
}