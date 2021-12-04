#include <iostream>
using namespace std;

int printnum(int input);

int main()
{
    int input;

    cout<<"Input number : ";
    cin>>input;
    printnum(input);
}

int printnum(int input)
{
    int *pntr;
    pntr = &input;
    cout<<"Output : "<<*pntr;

}