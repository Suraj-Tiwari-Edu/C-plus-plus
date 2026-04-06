#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int multiply(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
int divide(int x,int y)
{
    int z;
    z=x/y;
    return z;
}
int main()
{
    int a,b,c;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;
    c=multiply(a,b);
    cout<<multiply(a,b);
}