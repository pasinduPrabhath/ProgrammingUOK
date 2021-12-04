#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    int *p1, *p2, *p3;
    int _max, _min;
  
    cout<<"Enter the 3 numbers :\n";
    cin>>a>>b>>c;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    //highest
    if(*p1 >= *p2 && *p1 >= *p3)
    {
        _max = *p1;
        cout<<"Highest : "<<*p1<<endl;
    }
    
    if(*p2 >= *p1 && *p2 >= *p3)
    {
        _max = *p1;
        cout<<"Highest : "<<*p2<<endl;
    }

    if(*p3 >= *p2 && *p3 >= *p1)
    {
        _max = *p1;
        cout<<"Highest : "<<*p3<<endl;
    }

    //lowest
    if(*p1 <= *p2 && *p1 <= *p3)
    {
        _max = *p1;
        cout<<"Lowset : "<<*p1<<endl;
    }
    
    if(*p2 <= *p1 && *p2 <= *p3)
    {
        _max = *p1;
        cout<<"Lowset : "<<*p2<<endl;
    }

    if(*p3 <= *p2 && *p3 <= *p1)
    {
        _max = *p1;
        cout<<"Lowset : "<<*p3<<endl;
    }
    


}

