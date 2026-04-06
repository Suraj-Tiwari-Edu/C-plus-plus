#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;

    public:
    // operator + using below
/*
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
*/
    //Alternative      using user defined add func

    // to use operator + uncomment this below func
    
    Complex add(Complex x)
    {
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
    
    Complex(int real=0,int img=0)
    {
        setReal(real);
        setImg(img);
    }
    void setReal(int r);
    void setImg(int i);
    int getReal();
    int getImg();
};
void Complex::setReal(int r)
{
    real=r;
}
void Complex::setImg(int i)
{
    img=i;
}
int Complex::getReal()
{
    return real;
}
int Complex::getImg()
{
    return img;
}
int main()
{
    Complex c1,c2,c3;
    c1.setReal(2);
    c1.setImg(3);
    c2.setReal(5);
    c2.setImg(6);
    //if using operator + then use this below line
    // c3=c1+c2;              
    c3=c1.add(c2);      //if using user defined func use this 
    cout<<c3.getReal()<<"+i"<<c3.getImg()<<endl;
    
}