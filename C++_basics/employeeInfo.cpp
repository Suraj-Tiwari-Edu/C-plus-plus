#include<iostream>
using namespace std;
class Employee
{
    private:
    int Eid;
    string Ename;

    public:

    Employee(int id=0,string name="xyz")
    {
        Eid=id;
        Ename=name;
    }
    int getEid(){return Eid;}
    string getName(){return Ename;}
    
};
class FulltimeEmployee: public Employee
{
    int salary;

    public:
    FulltimeEmployee(int id,string name,int sal=0):Employee(id,name) // Calling Parent constructor
    {
        salary=sal;
    }
    int getSalary(){return salary;}
};
class Part_timeEmployee:public Employee
{
    int wages;

    public:
    Part_timeEmployee(int id,string name,int w=0):Employee(id,name)  // calling parent constroctor
    {
        wages=w;
    }
    int getWages(){return wages;}
};
int main()
{
   
    FulltimeEmployee E1(7,"Suraj",60000);
    Part_timeEmployee E2(1,"Satyam",2000);

    cout<<"Employee id "<<E1.getEid()<<" with name "<<E1.getName()<<" has salary = "<<E1.getSalary()<<endl;
    cout<<"Employee id "<<E2.getEid()<<" with name "<<E2.getName()<<" has wages = "<<E2.getWages()<<endl;
}