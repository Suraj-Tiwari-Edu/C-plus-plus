#include<iostream>
using namespace std;
template<class T>
T add(T x,T y)
{
    return x+y;
}
int main()
{
    cout<<add(4,5)<<endl;
    cout<<add(4.5f,5.5f);
}