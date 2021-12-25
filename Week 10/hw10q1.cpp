#include <stdio.h>
// #include<cstring>
using namespace std;

int main()
{
    FILE *p1;
    // char word[] = "This is the content of the file test.txt";

    // p1 = fopen("test.txt", "w");

    // for(int i = 0; i<strlen(word); i++)
    // {
    //     putc(word[i], p1);
    // }

    p1 = fopen("test.txt", "w");
    fprintf(p1,"%s", "This is the content of the file test.txt");

    fclose(p1);   
}
