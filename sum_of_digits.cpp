#include<iostream>
using namespace std;
int main()
{
    int userInput,remainder,sum=0,copyOFinput;
    cout<<"enter no.\n";
    cin>>userInput;
    copyOFinput=userInput;
    while(copyOFinput>0)
    {
        remainder=copyOFinput%10;
        copyOFinput=copyOFinput/10;
        sum=sum+remainder;
    }
    cout<<"sum of digits of number "<<userInput<<" = "<<sum;
    // Pause to see output
    cin.ignore();
    //cin.get();
    cout<<""<<endl;
    return 0;
}