#include<iostream>
using namespace std;

int timeDif(int xy[])
{
    int secs = 0;
    secs = xy[0]-xy[1];
    
    if(secs <= 0)
    {
        secs = secs * -1;
    }
    cout<<secs;
}

int main()
{
    int hours, minutes, seconds,i=0,time,j = 1; 
    int timeS[2];

    while(i<2)
    {
        cout<<"Enter the hours for time "<<j<<":";
        cin>>hours;

        while(hours > 12 || hours < 0)
        {
            cout<<"Enter the correct number of hours : ";
            cin>>hours;
        }
        
        cout<<"Enter the minutes for time "<<j<<":";
        cin>>minutes;

        while(minutes > 60 || minutes < 0)
        {
            cout<<"Enter the correct number of minutes : ";
            cin>>minutes;
        }

        cout<<"Enter the seconds for time "<<j<<":";
        cin>>seconds;

        while(seconds > 60 || seconds < 0)
        {
            cout<<"Enter the correct number of seconds : ";
            cin>>seconds;
        }   
        
        time = (hours*60*60 + minutes*60 + seconds);
        timeS[i] = time; 
        i++;
        j++;
        
        timeDif(timeS);

    }   
}