#include <iostream>
using namespace std;

int main()
{
    int cities[2][3] = {{10,20,30}, {40,50,60}};
    cout<<"      A     B     C"<<endl;
   
    for(int i = 0; i < 2; i++)
    {
        if(i == 0)
        {
            cout<<"D";
        }
         if(i == 1)
        {
            cout<<"E";
        }
         
        for(int j = 0; j < 3; j++)
        {
            cout<<"    "<<cities[i][j];
        }
        cout<<endl;
    }
}