// Sum of first n natural numbers
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the no. ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        sum+=i;
        ++i;
    }
    cout<<"sum of n natural no. is "<<sum;
    return 0;
}