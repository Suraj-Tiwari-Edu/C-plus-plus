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
       throw 1;
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
        throw 1.2;
    }
    x =stk[top];
    top--;
    return x;
}
int main()
{
    try
    {
        stack<float> s(5);
        s.push(10);
        s.push(23);
        s.push(33);
        s.push(2);
        s.push(12);
        //s.push(19);
        // s.push(17);
        s.pop();
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
    }
    catch(int e)
    {
        cout<<"StackOverflow "<<endl;
    }
    catch(double d)
    {
        cout<<"Stackunderflow "<<endl;
    }
}