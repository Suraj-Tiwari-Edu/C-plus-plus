#include<iostream>
using namespace std;

int main()
{
    int num;

    // Ask user to enter the position (nth Fibonacci number)
    cout<<"Enter no. "<<endl;
    cin>>num;

    // First two Fibonacci numbers
    int n1 = 0;   
    int n2 = 1;

    int sum = 0;  // Will store next Fibonacci number

    // If the number is less than 2, Fibonacci value is the number itself
    if(num < 2)
    {
        cout<<num;   // This exits program (does NOT print)
    }
    else
    {
        // Loop starts from 2 because first two Fibonacci numbers are already known
        for(int i = 2; i <= num; i++)
        {
            sum = n1 + n2;  // Next term = sum of previous two

            n1 = n2;        // update n1
            n2 = sum;       // update n2
        }

        // Print nth Fibonacci number
        cout << sum;
    }
}
