#include<iostream>
using namespace std;
int main()
{
    int userInput,remainder,rev=0,copyOFinput;
    cout<<"Enter the no. :";
    cin>>userInput;
    copyOFinput=userInput;
    while(copyOFinput>0)
    {
        remainder=copyOFinput%10;
        copyOFinput=copyOFinput/10;
        rev=rev*10+remainder;
    }  
    cout<<"reverse of number "<<userInput<<" is "<<rev;
    return 0;
}