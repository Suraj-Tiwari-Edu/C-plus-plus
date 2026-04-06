#include<iostream>
using namespace std;
class car
{
    public:
    virtual void start()
    {
        cout<<"car starts";
    }

    void stop()
    {
        cout<<"car stops";
    }
};

class Innova:public car
{
    public:
    void start()
    {
        cout<<"Innova starts";
    }
    void stop()
    {
        cout<<"Innova stops";
    }
};

class Swift:public car
{
    public:
    void start()
    {
    cout<<"Swift starts";
    }
    
    void stop()
    {
        cout<<"swift stops";
    }
};

int main()
{
    car*c1=new Innova(); //virtual is used to make the strat func of car virtual.
    c1->start();
    cout<<endl;
    car*c2=new Swift(); //no virtual is used so cars stop func is working as real.
    c2->stop();
    cout<<endl;
    car c3;
    c3.start(); 
}
