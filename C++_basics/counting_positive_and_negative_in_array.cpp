#include<iostream>
using namespace std;
int main()
{
    float A[100];
    int range,positiveCount=0,negativeCount=0;
    cout<<"Enter range :";
    cin>>range;
    cout<<"Enter elements: \n";
    for(int i=0;i<range;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<range;i++)
    {
        if(A[i]<0)
        {
            negativeCount+=1;
        }
        else
        {
            positiveCount+=1;
        }
    }
    cout<<"positive elemets are: "<<positiveCount<<endl;
    cout<<"negative elements are: "<<negativeCount;
    return 0;
}