#include <iostream>

using namespace std;

int main(){
    int a[4], b[4], c[4];

    for (int i=0; i<4; i++)
        a[i] = i;

    for (int i=0; i<4; i++)
        b[i] = i;
    
    for (int i=0; i<4; i++)
        c[i] = a[i] + b[i];

    for (int i=0; i<4; i++)
        cout<<c[i]<<"\n";
        
        cout<<endl;

}