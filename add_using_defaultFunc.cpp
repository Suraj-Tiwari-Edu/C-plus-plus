#include<iostream>
using namespace std;
template<class T>
T add(T a,T b,T c=0)
{
    return a+b+c;
}
int main()
{
    cout<<add(3,4)<<endl;
    cout<<add(3,6,1);
}