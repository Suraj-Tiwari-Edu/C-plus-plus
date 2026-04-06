#include<iostream>
using namespace std;
int main()
{
    int n,Fact=1,p;
    cout<<"Enter no. ";
    cin>>n;
    for(int i=n;i>0;--i)
    {
        p=n*Fact;
    }
    cout<<Fact;
    return 0;
}