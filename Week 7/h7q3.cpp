#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];

    cout<<"Input line of text : ";
    cin.getline(s, 100);

    cout<<"Your entered text : "<<s<<endl;

    int length = strlen(s);
    for(int i = 0; i < length; i++)
    {
        if(s[i]>= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
    }

    cout<<"In uppercase : "<<s<<endl;

    for(int i = 0; i<length; i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }

    cout<<"In lowercase : "<<s<<endl;
    return 0;
}