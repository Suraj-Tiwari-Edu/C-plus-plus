#include<iostream>
using namespace std;
int main()
{
    int Time;
    cout<<"Enter Time:";
    cin>>Time;
    //give input between 0 and 23 hour.
    if(Time>9 && Time<18)
    {
        cout<<"working time";
    }
    else
    {
        cout<<"Not working time";
    }
}