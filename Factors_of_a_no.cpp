#include<iostream>
using namespace std;
int main()
{
    int Factors,n;
    cout<<"Enter the no.: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}