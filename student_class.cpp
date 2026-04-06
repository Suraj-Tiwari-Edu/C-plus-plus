#include<iostream>
using namespace std;
class student
{
    int roll_no;
    string name;
    int mathsMARK,phyMARK,chemMARK;

    public:

    student(int roll_no,string name,int mathsMARK, int phyMARK, int chemMARK );
    void setRoll_no(int r);
    void setName(string n);
    void set_mathsMark(int m);
    void set_phyMark(int p);
    void set_chemMark(int c);
    int getRoll();
    string getName();
    int getMathsmark();
    int getPhymark();
    int getChem_mark();
    int total();
    string grade();
    ~student();
};

student::student(int roll_no=0,string name="xyz",int mathsMARK=0, int phyMARK=0, int chemMARK=0 )
{
    setRoll_no(roll_no);    //setRoll_no(int r) why not this and same for below func = bcoz we call func in constructor and while calling we do not declare func , we give argument.
    setName(name);
    set_mathsMark(mathsMARK);
    set_phyMark(phyMARK);
    set_chemMark(chemMARK);
}
void student::setRoll_no(int r)
{
    if(r>0){roll_no=r;}
    else {roll_no=-1;}
}
void student::setName(string n)
{
    name=n;
}
void student::set_mathsMark(int m)
{
    mathsMARK=m;
}
void student::set_phyMark(int p)
{
    phyMARK=p;
}
void student::set_chemMark(int c)
{
    chemMARK=c;
}
int student::getRoll()
{
    return roll_no;
}
string student::getName()
{
    return name;
}
int student::getMathsmark()
{
    return mathsMARK;
}
int student::getPhymark()
{
    return phyMARK;
}
int student::getChem_mark()
{
    return chemMARK;
}
int student::total()
{
    return mathsMARK+phyMARK+chemMARK;
}
string student::grade()
{
    if(total()>80)
    return "A";

    else if(total()<80 && total()>60)
    {
        return "B";
    }
    else
    {
        return "C";
    }
}
student::~student()
{
    cout<<"student is destroyed ";
}

int main()
{
    student s1(22,"Suraj",28,32,16);
    cout<<s1.total()<<endl;
    cout<<s1.grade()<<endl;
    return 0;
}