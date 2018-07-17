#include<iostream>
using namespace std;
class SC
{
    double radius;
    public:
    ~SC();
    SC();
    SC(double);
    SC operator ++();
    SC operator --();
    double operator=(SC);//equal op
    void show();
};
SC ::~SC()
{}
SC::SC()
{
    radius=0;
}
SC ::SC(double r)
{
    radius=r;
}
SC SC:: operator++()
{
    ++radius;
    return *this;
}
SC SC:: operator--()
{
    --radius;
    return *this;
}
double SC:: operator=(SC t)
{
    radius=t.radius;
    return radius;
}
void SC:: show()
{
    cout<<"value of r = "<<radius<<endl;
}
main()
{
    SC obj(9),obj1;
    ++obj1;
    obj1.show();
    --obj1;
    obj1.show();
    obj.show();
    ++obj;
    obj.show();
    --obj;
    obj.show();
    obj1=obj;
    obj1.show();
}
