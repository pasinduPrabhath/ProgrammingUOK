#include <iostream>
using namespace std;

int print_stars(int num1)
{
    int space;
    for(int i = 1, k = 0; i <= num1; ++i, k = 0)
    {
        for(space = 1; space <= num1-i; ++space)
        {
            cout << "  ";
        }

        while (k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout<<endl;
    }
}

int main(){
    int num;

    cout<<"Input number";
    cin>>num;

    print_stars(num);
    
}

