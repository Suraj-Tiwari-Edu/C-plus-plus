#include<iostream>
using namespace std;
int main()
{   
    int a,b,c,n;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    //calculator have 4 buttons
    //1- Addition
    //2- Substraction
    //3- Multiplication
    //4- Division
    //Give the value of n = Button no.
    cout<<"Enter value of n : ";
    cin>>n;
    switch(n)
    {
    case 1:
     {
        c=a+b;
        cout<<"sum is:"<<c;
        
     }
    break;
    
    case 2:
    {
        c=a-b;
        cout<<"substraction is :"<<c;

    }
    break;
    case 3:
    {
        c=a*b;
        cout<<"multiplication is:"<<c;
    }
    break;
    case 4:
    {
        c=a/b;
        cout<<"division is : "<<c;
    }
    break;
    default:
    {
        cout<<"Input is invalid or wrong button value";
    }
    }
    return 0;
}