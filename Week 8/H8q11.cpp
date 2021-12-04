#include <iostream>
using namespace std;

int main()
{
    char str[1000], *ptr;
    int v = 0, c = 0;

    cout<<"Enter string : ";
    cin>>str;

    ptr = str;

    while(*ptr != '\0')
    {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
        {
            v++;
        }

        else
        {
            c++;
        }

        ptr++;
    }

    cout<<"Number of vowels : "<<v<<"\nNumber of consonents : "<<c<<endl;
}