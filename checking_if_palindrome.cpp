#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0,d;
    cout<<"Enter the no. :";
    cin>>d;
    n=d;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        cout<<r;
        s=s*10+r;
    }  
    if(d==s)
    {
        cout<<"\npalindrome";
    }
    else
    {
        cout<<"\nnot palindrome";
    }
    return 0;
}