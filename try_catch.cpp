#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of a and b "<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw 1;
        }   
        c=a/b;
        cout<<"value of c is "<<c<<endl;
    }
    catch(int e)
    {
       cout<<"denominator is zero"<<endl;
    }

    return 0;
}