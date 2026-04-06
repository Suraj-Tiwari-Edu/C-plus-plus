#include<iostream>
using namespace std;
int main()
{
    int A[10]={6,8,13,17,20,22,25,28,30,35};
    int key,low,high,mid,no_of_items=10;
    cout<<"Enter the no you want to search for";
    cin>>key;
    low=0;
    high=no_of_items-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==A[mid])
        {
            cout<<"no. is found at "<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<key<<" is not inside the Array";
}