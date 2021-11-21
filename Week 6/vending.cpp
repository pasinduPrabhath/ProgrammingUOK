#include <iostream>
using namespace std;

int main(){
    int balance,m,n,total;
    double price,cash;
    string money[] = {"Rs 10 coins", "Rs 5 coins", "Rs 2 coins", "Rs 1 coins"};
    int coinscount[4];
    int coins[4];

    cout<<"Please enter the amount of purchase\n";
    cin>>price;// input the total price

    while(price != (int)price)
    {
        cout<<"Please enter amount of purchase correctly without cents\n";
        cin>>price;// input the payment given by customer
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"Please enter amount of"<<money[i]<<" : ";
        cin>>coins[i]; // 0 = Rs 10
        coinscount[i] += coins[i];
    }
    
    total = coins[0] * 10 + coins[1] * 5 + coins[2] * 2 + coins[3];
    
    balance = total - price;

    cout<<"Your balance is "<<balance<<endl;        

    n = balance / 10;
    m = balance % 10;

    if(n>0)
    {
        cout<<"Rs. 10 coins count is "<<n<<endl;   
    }
 
    n = m / 5;
    m = m % 5;

    if(n>0)
    {
        coinscount[1] -= n;

        if(coinscount[1] > 0)
        {
            cout<<"Rs. 5 coins count is "<<n<<endl; 
            //coinscount[1] -= 2*n;   
        }
    }
      
    n = m / 2;
    m = m % 2;

    if(n>0)
    {
        cout<<"Rs. 2 coins count is "<<n<<endl;   
    }
    
    n = m / 1;
    m = m % 1;

    if(n>0)
    {
        cout<<"Rs. 1 coins count is "<<n<<endl;  
    }
    
    return 0;
}

