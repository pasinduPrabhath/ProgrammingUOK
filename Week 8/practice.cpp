#include<iostream>
#include<string>
using namespace std;

int main()
{
    string food = "pizza";
    string *ptr = &food;

    cout<<"Memory address by & : "<<&food<<endl;
    cout<<food<<endl;
    cout<<"Memory by pointers : "<<ptr;
}