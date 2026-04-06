#include<iostream>
using namespace std;
class Rectangle
{   
    private: //data members cannot be accessed and no need to use (private:) as it is default 
    int length,breadth;
    public://can be accessed directly
// Constructor
    Rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
    }
// MUTATORS
// use void as func not returning anything
    void setLength(int l)
    {
        if(l>0)
        {
            length=l;
        }
        else
        {
        length=0;
        }
    }
    void setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else
        {
        breadth=0;
        }
    }
//  ACCESSORS

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
//other func
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
    cout<<r1.getLength()<<endl;
    r1.setLength(2);
    r1.setBreadth(3);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    return 0;
}