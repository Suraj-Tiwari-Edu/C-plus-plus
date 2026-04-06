#include<iostream>
using namespace std;
class rect;  //declaratiom of rect class to use in class shape before defining class rect (forward declaration)
class shape
{
    protected:
    int length;
    int breadth;

    public:
    shape(int x=0,int y=0)
    {
        length=x;
        breadth=y;
    }

    int peri()
    {
        return 2*(length+breadth);
    }

   friend class rect;  // friend class declaration for using pvt members and func of class shape
};

class rect
{
    public:
    shape s;
    void set(int l,int b)
    {
    s.length=l;
    s.breadth=b;
    }
    // alternative for using peri()------------

    // int getPeri()
    // {
    //     return s.peri();
    // }
    
    int area()
    {
    return s.length*s.breadth;
    }
}; 
int main()
{
    rect r;
    r.set(2,4);
    cout<<r.s.peri()<<endl;  //peri is func of s and used in r so, r.s.peri()
    //alternative for using peri
    //cout<<r.getPeri()<<endl;
    cout<<r.area();
}