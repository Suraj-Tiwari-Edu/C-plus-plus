#include<iostream>
using namespace std;
int main()
{
    int value;
    cout<<"square= 1\n";
    cout<<"rectangle=2\n";
    cout<<"upper left triangle=3\n";
    cout<<"lower left triangle=4\n";
    cout<<"upper right triangle=5\n";
    cout<<"lower right triangle=6\n";
    cout<<"diagonal=7\n";
    cout<<"opposite diagonal=8\n";
    cout<<"enter value of pattern you want to print\n";
    cin>>value;
    switch(value)
    {
        case 1: //Square
        {
            for(int i=0;i<5;i++) 
            {
                for(int j=0;j<5;j++)
                {
                    cout<<"*  ";
                }
                cout<<endl;
            }
        }
        break;
        case 2: //Rectangle
        {
            for(int i=0;i<4;i++)
            {
             for(int j=0;j<10;j++)
             {
                 cout<<"* ";
             }
             cout<<endl;
            }
        }
        break;
        case 3: // Upper left triangle
        {
            int no_of_columns=5;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<no_of_columns;j++)
                {
                  cout<<"* ";
                }
                --no_of_columns;
                cout<<endl; 
            }
        }
        break;
        case 4:  //Lower left triangle
        {
            for(int i=0;i<6;i++)
            {
                for(int j=0;j<=i;j++)
                {
                  cout<<"* ";
                }
                cout<<endl;
            }
        }
        break;
        case 5:  //Upper right triangle
        {
            int no_of_columns=5,no_of_rows=5;
            for(int i=0;i<no_of_rows;i++)
            {
                for(int j=0;j<no_of_columns;j++)
                {
                   if(i<=j)
                   {
                    cout<<"* ";
                   }  
                   else if(i>j)
                   {
                    cout<<"  ";
                   }
                }
                cout<<endl;
            }   
        }
        break;
        case 6: //Lower right triangle
        {
            int n=5;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if((i+j)<(n-1))
                    {
                        cout<<"  ";
                    }
                    else
                    {
                      cout<<"* ";
                    }
                }
                cout<<endl;
            }
        }
        break;
        case 7: //Diagonal
        {
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                {
                    if(i>j)
                    {
                        cout<<"  ";
                    }
                    else if(i==j)
                    {
                        cout<<"* ";
                    }
                }
                cout<<endl;
            }
        }
        break;
        case 8: //opposite diagonal
        {
            int n=5;
            for(int i=0;i<n;i++)
            {
             for(int j=0;j<n;j++)
             {
                 if((i+j)<(n-1))
                 {
                     cout<<"  ";
                 }
                 else if((i+j)==(n-1))
                 cout<<"* ";
             }
             cout<<endl;
            }
        }
        break;
        default:
        {
            cout<<"invalid input";
        }
    }
    return 0;
}