#include <iostream>
using namespace std;

int main()
{
    char str[1000], *ptr;
    int i = 0;

    cout<<"Enter string : ";
    cin>>str;

    ptr = str;

    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }

    cout<<"Length of the string : "<<i;
}