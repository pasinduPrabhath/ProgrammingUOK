#include <iostream>
using namespace std;

int main()
{
    int input, count1 = 0, econ = 5;
    char yesno;
    int seats[10] = {0,0,0,0,0,0,0,0,0,0};

    while (count1 < 5 || econ < 10)
    {
        cout<<"-------Welcome to Airline--------\n";
        cout<<"Please type 1 for first class\nPlease type 2 for economy\nYour Input : "; 
        cin>>input;

        while(input !=1 && input != 2)
        {
            cout<<"You have entered wrong value.\nPlease type 1 for first class\nPlease type 2 for economy\nYour Input : ";
            cin>>input;
        }

        if(input == 1 && seats[count1] == 0 && count1<5)
        {
            cout<<"------You have selected fist class------"<<endl;
            seats[count1] = 1;
            cout<<"You have booked seat no : "<<(count1+1)<<" in first class"<<endl;
            count1++;
        }

        if(input == 1 && count1 >= 5)
        {
            cout<<"First class is full. Do you like to book a seat in economy section?\nIf yes press y, if no press n\nInput (y/n): ";
            cin>>yesno;
        }

        if(yesno == 'n')
        {
            cout<<"Thank you!";
            return 0;
        }

        if(input == 2 && seats[econ] == 0 || yesno == 'y')
        {
            cout<<"------You have selected economy class------"<<endl;
            seats[econ] = 1;
            cout<<"You have booked seat no : "<<(econ+1)<<" in economy class"<<endl;
            econ++;
        }

        if(seats[4] == 1 && seats[9] == 1)
        {
            cout<<"All seats booked. Next flight leaves in 3 hours. Thank you!"<<endl;
            return 0;
        }
    }
}