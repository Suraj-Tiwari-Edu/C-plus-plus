#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    cout<<add(3,6)<<endl;
    cout<<add(4.3f,5.7f)<<endl;
    cout<<add(2,4,6);
}