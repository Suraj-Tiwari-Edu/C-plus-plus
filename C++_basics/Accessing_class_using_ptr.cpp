#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length,breadth;
    // int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1;
    Rectangle *p;
    p=&r1;
    p->length=5;
    p->breadth=10;
    // p->area();
    cout<<p->area()<<endl;
    Rectangle *q;
    q= new Rectangle;
    q->length=2;
    q->breadth=3;
    cout<<q->perimeter()<<endl;
}