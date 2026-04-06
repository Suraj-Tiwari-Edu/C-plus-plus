#include<iostream>
using namespace std;
int main()
{
    int A[10],no_ofItems=10;
    cout<<"Enter the elements of array";
    for(int i=0;i<10;i++)
    {
        cin>>A[i];
    }
    int key,notIn=0;
    cout<<"Enter no. you want to find in array as Key\n";
    cin>>key;
    for(int i=0;i<10;i++)
    {
        if(A[i]==key)
        {
            cout<<"Location of the Key is A["<<i<<"]";
            notIn=1;
        }
    }
    if(notIn==0)
        {
         cout<<"Given key is not in the array";
        }
    return 0;
}