#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b"<<endl; 
    cin>>a>>b;
     //checking if a is greater.
    if(a>b)
    {
        cout<<"greatest no. is a = "<<a; 
    }
    //cheching if b is greater.
    else if(b>a)
    {
        cout<<"greatest no. is b = "<<b;
    }
    //checking if both are equal.
    else
    {
        cout<<"both are equal ";
    }
    return 0;
}