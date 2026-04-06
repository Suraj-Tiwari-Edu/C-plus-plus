#include<iostream>
using namespace std;

int Division(int x,int y)
{
    if(y==0)
    {
        throw 1;
    }
    return x/y;
}

int main()
{
    int a,b,c;
    cout<<"Value of a and b ";
    cin>>a>>b;

    try
    {
        c=Division(a,b);
        cout<<"Division result is "<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Denominator is zero"<<endl;
    }
    return 0;
    
}