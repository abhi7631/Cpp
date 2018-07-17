#include<iostream>
using namespace std;
class Dollar
{
    double d;
    public:
    ~Dollar();
    Dollar();
    Dollar(double);
    void show(double);
    double convert(double);
};
Dollar ::~Dollar()
{}
Dollar ::Dollar()
{
    d=0;
}
Dollar ::Dollar(double dd)
{
    d=dd;
}
void Dollar ::show(double res)
{
    cout<<d<<"dollar in rupee is"<<res<<"\n";
}
double Dollar ::convert(double d)
{
    double c3;
    c3=(60.0*d);
    return c3;
}
main()
{
    double x,res;
    cout<<"enter money in dollar"<<endl;
    cin>>x;
    Dollar c1(x);
    res=c1.convert(x);
    c1.show(res);
}
