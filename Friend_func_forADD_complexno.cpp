#include<iostream>
using namespace std;
struct Complex       //using STRUCT here instaed of class just bcoz it is PUBLIC and no need to mention
{
    int real;
    int img;

    friend Complex operator+(Complex x,Complex y);
    
};
Complex operator+(Complex x,Complex y)
{
    Complex t;
    t.real=x.real+y.real;
    t.img=x.img+y.img;
    return t;
}
int main()
{
    Complex c1,c2,c3;
    c1.real=2;c1.img=3;
    c2.real=5;c2.img=5;
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.img;
}