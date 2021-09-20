#include <iostream>

using namespace std;

int getSumofArrays(){
    int a[4], b[4], c[4], j, k;

    for (int i=0; i<4; i++){
        cout<<"enter the number for array 1: ";
        cin>>a[i];
    }

    for (int i=0; i<4; i++){
        cout<<"enter the number for array 2: ";
        cin>>b[i];
    }
    
    for (int i=0; i<4; i++){
        c[i] = a[i] + b[i];
        cout<< c[i]<<"\n";
    }
}

int main(){
    getSumofArrays();
}

