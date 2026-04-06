#include<iostream>
using namespace std;
int main()
//remainder=(logic for keeping or selecting last digit)
//a for checking armstrong condition i.e. sum of cubes of every digit = original no. n
// copyOFinput is temporary variable for loop for operating on input no.
{
    int userInput,remainder,a=0,copyOFinput;
    cout<<"Enter the no. :";
    cin>>userInput;
    copyOFinput=userInput;
    while(copyOFinput>0)
    {
        remainder=copyOFinput%10;
        a=a+remainder*remainder*remainder;
        copyOFinput=copyOFinput/10;
    }
    if(a==userInput) 
    {
        cout<<userInput<<" is armstrong no.";
    } 
    else
    {
        cout<<userInput<<" is not a armstrong no.";
    }
    return 0;
}