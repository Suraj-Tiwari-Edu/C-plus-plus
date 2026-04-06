//print number in words
#include<iostream>
using namespace std;
int main()
{
    int userInput,remainder,rev=0;
    cout<<"Enter any no.";
    cin>>userInput;
    while(userInput>0)
    {
        remainder=userInput%10;
        userInput=userInput/10;
        rev=rev*10+remainder;
    }
   
    remainder=0;
    while(rev>0)
    {
        remainder=rev%10;
        rev=rev/10;
        
        
         switch(remainder)
        {
            case 1: cout<<"one";
            break;
            case 2: cout<<"two";
            break;
            case 3: cout<<"three";
            break;
            case 4: cout<<"four";
            break;
            case 5: cout<<"five";
            break;
            case 6: cout<<"six";
            break;
            case 7: cout<<"seven";
            break;
            case 8: cout<<"eight";
            break;
            case 9: cout<<"nine";
            break;
            case 0: cout<<"zero";
            break;
        }
        cout<<" ";
        
    }
    return 0;
}