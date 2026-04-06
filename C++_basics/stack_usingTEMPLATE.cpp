#include<iostream>
using namespace std;
template<class T>
class stack
{
    private:

    T *stk;
    int top=-1;
    int size;

    public:
    stack(int sz)
    {
        size=sz;
        stk= new T[size];
    }
    void push(T x);
    T pop();
    
};

template<class T>
void stack<T>:: push(T x)
{
    if(top==size-1)
    {
        cout<<"overflow"<<endl;
    }
    top++;
    stk[top]=x;

}
template <class T>
T stack<T>:: pop()
{
    T x=0;
    if(top==-1)
    {
        cout<<"underFlow"<<endl;
    }
    x =stk[top];
    top--;
    return x;
}
int main()
{
    stack<float> s(10);
    s.push(10);
    s.push(23);
    s.push(33);
    //s.pop();
    cout<<s.pop()<<endl;
}