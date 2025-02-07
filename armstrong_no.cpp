#include<iostream>
using namespace std;
int main()
//rem= remainder(logic for keeping or selecting last digit)
//n for input
//a for checking armstrong condition i.e. sum of cubes of every digit = original no. n
// s is temporary variable for loop for operating on input no.
{
    int n,rem,a=0,s;
    cout<<"Enter the no. :";
    cin>>n;
    s=n;
    while(s>0)
    {
        rem=s%10;
        a=a+rem*rem*rem;
        s=s/10;
    }
    if(a==n) 
    {
        cout<<n<<" is armstrong no.";
    } 
    else
    {
        cout<<n<<" is not a armstrong no.";
    }
    return 0;
}