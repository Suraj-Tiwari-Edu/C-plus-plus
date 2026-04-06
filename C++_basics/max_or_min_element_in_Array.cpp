#include<iostream>
using namespace std;
int main()
{
    int  userInput,range;
    cout<<"For finding maximum, input 1 and for finding min, input 2: ";
    cin>>userInput;
    cout<<"Enter range of Array: ";
    cin>>range;
    float A[range],max,min;
    cout<<"Enter elements:\n";
    for(int i=0;i<range;i++)
    {
        cin>>A[i];
    }
    
    switch(userInput)
    {
        case 1:
        {
        max=A[0];
        for(int i=0;i<range;i++)
        {
            if(max<A[i])
            {
                max=A[i];
            }
        }
        cout<<"maximum element of the array is "<<max;
        }
        break;

        case 2:
        {
            min=A[0];
            for(int i=0;i<range;i++)
            {
                if(A[i]<min)
                {
                    min=A[i];
                }
            }
            cout<<"Minimum element of the Array is "<<min;
        }
    }
    return 0;
}