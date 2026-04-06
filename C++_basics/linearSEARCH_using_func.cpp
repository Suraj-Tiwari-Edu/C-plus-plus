#include<iostream>
using namespace std;
int search(int A[],int noOFelements,int key)
{
    for(int i=0;i<noOFelements;i++)
    {
        if(A[i]==key)
        {
            return i;
        }
    }
     return -1;
}
int main()
{
    int noOFelements,key,index;
    int A[]={2,4,6,8,5};
    cout<<"enter no. of elements"<<endl;
    cin>>noOFelements;
    cout<<"Enter key";
    cin>>key;
    index=search(A,noOFelements,key);
    cout<<"key is at "<<index<<endl;
}