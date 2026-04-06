
//n is Perfect no. if,
// sum of factors of n = 2*n

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the no.: ";
    cin>>n;
    for(int i=1;i<=n;i++)                
    {
        if(n>0 && n%i==0)
        {
            cout<<i<<endl;
            sum+=i;
        }
       
        
     }
     if(sum==(n*2))
     {
        cout<<"sum is :"<<sum<<endl;
        cout<<"value of "<<n<<" X 2 ="<<n*2<<endl;
        cout<<n<<" is perfect no.";
     }
     else{
        cout<<n<<" is not perfect";
     }
    return 0;
}