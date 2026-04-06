#include<iostream>
using namespace std;
class Test
{
    private:
    int a;

    public:
    static int count;   // declaration of static member.

    Test()
    {
        a=5;
        count++;
        
    }
    static int getCount()  //static func can only use static members not pvt members.
    {
        return count;
        //return a;       this is wrong bcoz static fun can only use static membrs.
    }
};
int Test::count=0;      // re-declaration is must for using static members in class
int main()
{
    Test t1;
    Test t2;
    
    cout<<t1.count<<endl;
    cout<<t2.getCount()<<endl;
    cout<<Test::count<<endl;   //scope resolution is used
}