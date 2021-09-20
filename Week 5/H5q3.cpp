#include<iostream>
#include<math.h>

using namespace std;

int distance(double xpoint[], double ypoint[])
{
    double distance = 0;

    distance = sqrt(pow((xpoint[0]-xpoint[1]),2) + pow((ypoint[0]-ypoint[1]),2));
    cout<<"distance is : "<<distance;
}

int main()
{
    double xpoint[2];
    double ypoint[2];
    int i = 1,j = 0;

    while(i<3)
    {
        cout<<"Enter the x"<<i<<" : ";
        cin>>xpoint[j];

        cout<<"Enter the y"<<i<<" : ";
        cin>>ypoint[j];
        i++;
        j++;//to acces array
    }

    distance(xpoint,ypoint);
}