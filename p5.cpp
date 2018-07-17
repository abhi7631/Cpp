#include<iostream>
using namespace std;
class A
{
    int val;
    public:
    A();
    ~A();
    A(int);
    void show();
    A operator -(A);
    A operator +(A);
};
A :: A()
{
    val=0;
}
A :: ~A()
{}
A ::A(int v)
{
    val=v;
}
void A ::show()
{
    cout<<"value = "<<val<<endl;
}
A A::operator+(A t)//A+A
{
    val=val+t.val;
    return *this;
}
A A::operator-(A t)
{
    val=val-t.val;
    return *this;
}
main()
{
    int x,y,z;
    cout<<"enter value of a"<<endl;
    cin>>x;
    A a(x),d;
    cout<<"enter value of b"<<endl;
    cin>>y;
    A b(y);
    cout<<"enter value of c"<<endl;
    cin>>z;
    A c(z);
    d=a+b-c;
    d.show();
}
