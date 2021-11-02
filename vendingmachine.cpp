//IM/2019/088 
//Manahara Bibulewela

#include <iostream>
using namespace std;

int coincount[4] = {100,100,100,100};
int tempbalance;

int productslist(int items[4][2]) //products list
{
    for(int i = 0; i<4; i++)
    {
        cout << i+1 << ") Price of product "<< i+1 <<" : " << items[i][0] << "  Available Quantity : " << items[i][1] << "\n";
    }
    cout<<"----------------------------------------------------\n"; 
}

int getcoins(int coins[4]) //coin inputs
{
    string money[] = {"Rs 10 coins", "Rs 5 coins", "Rs 2 coins", "Rs 1 coins"};
    for (int i = 0; i < 4; i++)
    {
        cout<<"Please enter amount of "<<money[i]<<" : ";
        cin>>coins[i]; // [0] = Rs 10
        coincount[i] += coins[i];

        if(coincount[i] > 120)
        {
            int change = coincount[i] - 120;
            cout<<change<<" coins were moved to overflow bin.\n";
            coincount[i] = 120;//removing excess coins
        }
    }
}

int cashout(int balance)
{
    int n[4],m[4];
    n[0] = balance / 10;
    m[0] = balance % 10;

    if(coincount[0] > n[0] && n[0] > 0)
    { 
        cout<<"Rs. 10 coins count is "<<n[0]<<endl;   
        coincount[0] -= n[0];
    }
    else if (coincount[0] < n[0])
    {
        m[0] = balance;
    }

    n[1] = m[0] / 5;
    m[1] = m[0] % 5;

    if(coincount[1] > n[1] && n[1]>0)
    {
        cout<<"Rs. 5 coins count is "<<n[1]<<endl; 
        coincount[1] -= n[1];
    }
    else if (coincount[0] < n[0])
    {
        m[1] = balance;
    }

    n[2] = m[1] / 2;
    m[2] = m[1] % 2;

    if(coincount[2] > n[2] && n[2]>0)
    {
        cout<<"Rs. 2 coins count is "<<n[2]<<endl;   
        coincount[2] -= n[2];
    }
    else if (coincount[0] < n[0])
    {
        m[2] = balance;
    }
    
    n[3] = m[2] / 1;
    m[3] = m[2] % 1;

    if(coincount[3] > n[3] && n[3]>0)
    {
        cout<<"Rs. 1 coins count is "<<n[3]<<endl; 
        coincount[3] -= n[3]; 
    }
    else if (coincount[0] < n[0])
    {
        cout<<"Out of change "<<endl;
    }
}

int calculations(int total, int coins[4], int balance, int cost)
{
    total = coins[0] * 10 + coins[1] * 5 + coins[2] * 2 + coins[3];
    balance = total - cost;
    int newcoins;
    
    for(int j = 0; balance < 0; j++)
    {
        
        tempbalance = total - cost;
        cout<<"Insuffiecient balance, Please enter more Rs."<<-1 * tempbalance<<"\n";
        getcoins(coins);
        total = coins[0] * 10 + coins[1] * 5 + coins[2] * 2 + coins[3];
        balance = total + tempbalance;
    }
   
    cout<<"Your balance is : "<<balance<<endl;
    cashout(balance);
}


int main()
{
    int items[4][2] = {{110,30},{120,50},{150,60},{200,70}};
    int coins[4];
  
    int inputnum,total,balance,cost,continuining = 0;
    int pw = 321;//password
    
    while(continuining == 0)
    {
        productslist(items);

        cout<<"Enter the number of wanted product : "; //product number
        cin>>inputnum;

        for(int i = 0; inputnum > 4 || inputnum < 1; i++)
        {
            cout<<"Enter a number in range in the list : ";
            cin>>inputnum;
        }

        cout<<"Selected product is product "<<inputnum<<" , Enter Rs. "<< items[inputnum-1][0]<<" to purchase.\n";

        getcoins(coins);

        cost = items[inputnum - 1][0];
        calculations(total, coins, balance, cost);

        cout<<"do you want to do another transaction? If yes, then press 0, or if you are developer, then insert password to abort \n your input : ";
        cin>>continuining;
        while(continuining != 0 && continuining != pw)
        {
            cout<<"Please input correct number : ";
            cin>>continuining;
        }
        if(continuining == pw)
        {
            cout<<"Aborted!";
        }
    }
    
}

