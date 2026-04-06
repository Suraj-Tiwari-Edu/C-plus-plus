#include<iostream>
using namespace std;
int main()
{
    //Arr must be sorted
    int length,size,key;
    cin>>length>>size>>key;
    int A[size];
    for(int i=0;i<length;i++)
    {
        A[i]=i*2;
    }
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    int b;
    int low=0;
    int high=length-1;
    int m1;
    int m2;
    if(key>A[length-1])
    {
        cout<<"Out of bound ";
    }
    else
    {
        while(low<=high)
        {
            b=(high-low)/3;
            m1=low+b;
            m2=low+(2*b)+1;
            //m2=high-b;        //by using this no need to check below if condi for m2
            if(m2>high)
            {
                m2=high;
            }
            if(key==A[m1])
            {
                cout<<m1;
                break;
            }
            else if(key==A[m2])
            {
                cout<<m2;
                break;
            }
            else if(key<A[m1])
            {
                high=m1-1;
            }
            else if(key>A[m1] && key<A[m2])
            {
                low=m1+1;
                high=m2-1;
            }
            else if(key>A[m2])
            {
                low=m2+1;
            }
            
        }
        if(low>high)
        {
            cout<<"out of bound ";
        }
    }
    return 0;
}