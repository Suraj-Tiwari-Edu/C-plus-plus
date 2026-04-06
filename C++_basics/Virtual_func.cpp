class BasicCar
{
public:
virtual void start(){cout<<"BasicCar started"<<endl;}  // Virtual functions can be overrides in derived class , Pure virtual functions must be overrides by derived class
};
class AdvanceCar: public BasicCar
{
public:
void start(){cout<<"AdvanceCar Started"<<endl;}
};
int main()
{
BasicCar *p=new AdvanceCar();
p->start();
}