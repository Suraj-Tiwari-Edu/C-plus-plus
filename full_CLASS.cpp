// full class
#include<iostream>
using namespace std;
class Rectangle
{
    int length,breadth;

    public:

    Rectangle();
    Rectangle (int l,int b);

   void setLength(int l);
   void setBreadth(int b);
   int getLength();
   int getBreadth();
   int area();
   int perimeter();
   bool isSquare(); 
   ~Rectangle();
};

Rectangle::Rectangle()
{
    length=0;
    breadth=0;
}
Rectangle::Rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
    }

void Rectangle::setLength(int l)
    {
        if(l>0)
        {
        length=l;
        }
        else{
            length=0;
        }
    }
   
void Rectangle::setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else{
            breadth=0;
        }
    }
int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

bool Rectangle::isSquare()
{
    return length==breadth;
}

Rectangle::~Rectangle()
{
    cout<<"Rectangle is destroyed";
}

int main()
{
    Rectangle r1(2,3);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r1.getLength()<<endl;
    cout<<r1.getBreadth()<<endl;
    r1.setLength(5);
    r1.setBreadth(5);
    cout<<r1.area()<<endl;
    if(r1.isSquare())
    {
        cout<<"yes"<<endl;
    }
}