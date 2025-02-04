#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter values of a,b and c respectively";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is greatest";
    }
    else if(b>c)
     {
          cout<<"b is greatest";
     }
    else if(c>b)
    {
      cout<<"c is greatest";
    }
    else
    {
        cout<<"all are equal or invalid";
    }
   return 0;
}