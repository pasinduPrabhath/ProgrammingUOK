/* IM/2019/069
   Pasindu Prabhath
   Assignment 1
   23rd August 2021*/
#include <iostream>
using namespace std;

int main(){
    int price,cash,balance,m,n;

    cout<<"Please enter the amount of purchase\n";
    cin>>price;// input the total price

    cout<<"Please enter the payment amount\n";
    cin>>cash;// input the payment given by customer

    balance = cash - price;

    cout<<"Your balance is "<<balance<<endl;      

    n = balance / 5000;
    m = balance % 5000;

    cout<<"Rs. 5000 notes count is "<<n<<endl;   

    n = m / 2000;
    m = m % 2000;

    cout<<"Rs. 2000 notes count is "<<n<<endl;

    n = m / 1000;
    m = m % 1000;

    cout<<"Rs. 1000 notes count is "<<n<<endl;    

    n = m / 500;
    m = m % 500;

    cout<<"Rs. 500 notes count is "<<n<<endl;

    n = m / 100;
    m = m % 100;

    cout<<"Rs. 100 notes count is "<<n<<endl;  

    n = m / 50;
    m = m % 50;

    cout<<"Rs. 50 notes count is "<<n<<endl;      

    n = m / 20;
    m = m % 20;

    cout<<"Rs. 20 notes count is "<<n<<endl;    

    n = m / 10;
    m = m % 10;

    cout<<"Rs. 10 notes count is "<<n<<endl;     

    n = m / 5;
    m = m % 5;

    cout<<"Rs. 5 coins count is "<<n<<endl;   

    n = m / 2;
    m = m % 2;

    cout<<"Rs. 2 coins count is "<<n<<endl;   

    n = m / 1;
    m = m % 1;

    cout<<"Rs. 1 coins count is "<<n<<endl;  

    return 0;
}

