#include<iostream>
using namespace std;
int main()
{
    int userInput,remainder;
    cout<<"Enter the no. :";
    cin>>userInput;
    while(userInput>0)
    {
        remainder=userInput%10;
        userInput=userInput/10;
        cout<<remainder<<endl;
    }  
    return 0;
}