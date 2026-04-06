// testing different loops on multiplication table 
// testing different loops on multiplication table 
// testing different loops on multiplication table 

#include<iostream>
using namespace std;
int main()
{
    int n,loop_no;
    cout<<"enter a no. ";
    cin>>n;
    //for loop = loop_no 1
    //while loop= loop_no 2
    // do while loop=loop_no 3
    cout<<"enter loop no. ";
    cin>>loop_no;
    switch(loop_no)
    {
        case 1: 
        {
           for(int i=1;i<=10;i++)
           {
            cout<<n<<"X"<<i<<"="<<n*i<<endl;
           }     
        }
        break;
        case 2:
        {   
            int i=1;
            while(i<=10)
            {
                 cout<<n<<"X"<<i<<"="<<n*i<<endl;
                 i++;
            }
        }
        break;
        case 3:
        {   int i=1;
            do
            {
                cout<<n<<"X"<<i<<"="<<n*i<<endl;
                ++i;
            } while (i<=10);
            
        }
        break;
        default:
        {
            cout<<"invalid";
        }
        
    }
    return 0;
}