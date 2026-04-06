#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;

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
    Rectangle r1,r2;
    cout<<"Enter length and breadth";
    cin>>r1.length>>r1.breadth;
    cout<<r1.area()<<" is area of rectangle "<<endl;
    cout<<r1.perimeter()<<" is perimeter of rectangle"<<endl;

}