#include<iostream>
using namespace std;
int main()
{
    float A[100],userInput;
    int notIn=0,range;
    cout<<"Enter range: ";
    cin>>range;
    cout<<"Enter elements:\n";
    for(int i=0;i<range;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter no. you want to find in array:\n";
    cin>>userInput;
    for(int i=0;i<range;i++)
    {
        if(A[i]==userInput)
        {
            cout<<"Location of the Key is A["<<i<<"]";
            notIn=1;
        }
    }
    if(notIn==0)
    {
        cout<<"Number you are searching for is not in the array";
    }
    return 0;
}