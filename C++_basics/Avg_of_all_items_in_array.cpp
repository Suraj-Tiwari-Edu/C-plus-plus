#include<iostream>
using namespace std;
int main()
{
    int no_of_element;
    float A[50],sum=0,avg=0;
    cout<<"Enter no. of items ";
    cin>>no_of_element;
    cout<<"Enter items ";
    for(int i=0;i<no_of_element;i++)
    {
        cin>>A[i];
        sum=sum+A[i];
    }
    avg=sum/no_of_element;
    cout<<endl;
    cout<<"avg of given items is "<<avg;
    return 0;
}