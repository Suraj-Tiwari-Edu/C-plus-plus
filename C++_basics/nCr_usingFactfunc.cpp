#include<iostream>
using namespace std;
int fact(int f) //for finding factorial
{
    if(f==1)    //base case
    {
        return 1;
    }
    return fact(f-1)*f; //recursion
}
int c(int n,int r)
{
    int m=fact(n);
    int s=fact(r);
    int t=fact(n-r);
    return m/(s*t);
}
int main()
{
    int a=5,b=2;
    cout<<c(a,b);

}