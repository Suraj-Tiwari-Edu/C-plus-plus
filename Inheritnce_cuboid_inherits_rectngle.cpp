#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

    public:

    Rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l);
    void setBreadth(int b);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
class Cuboid:public Rectangle       // here : this sign is for extends,    class Cuboid extends class Rectangle. 
{
    int height;

    public:

    Cuboid(int h=0)
    {
        setHeight(h);
    }

    void setHeight(int h);
    int getHeight(){return height;}

    int volume();
};
void Cuboid::setHeight(int h)
{
    height=h;
}

int Cuboid::volume()
{
    // both options can be used.
   // return getLength()*getBreadth()*getHeight();
   return area()*getHeight();  
}

int main()
{
    Cuboid c1;
    c1.setLength(5);
    c1.setBreadth(5);
    c1.setHeight(5);

    cout<<c1.getLength()<<endl;
    cout<<c1.getHeight()<<endl;

    cout<<c1.volume()<<endl;
    Rectangle r1;
    r1.setLength(2);
    r1.setBreadth(2);
    cout<<r1.area();
}