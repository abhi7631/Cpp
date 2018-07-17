#include<iostream>
using namespace std;
class SAM
{
    int val;
    public:
    SAM();
    SAM(int);
    void show();
    SAM operator +(int);
    friend SAM operator+(int,SAM&);

};
SAM :: SAM(){
    val=0;
}
SAM ::SAM(int v)
{
    val=v;
}
SAM SAM::operator+(int x)
{
    val=val+x;
    return *this;
}
SAM operator+(int x,SAM &t)//fiend
{
    SAM r;
    r.val=x+t.val;
    return r;

}
void SAM ::show()
{
cout<<"sum = "<<val<<endl;
}
main()
{
    int x;
    cout<<"enter s1"<<endl;
    cin>>x;
    SAM s1(x),s2;
    s2=s1+10;
    s2.show();
    s2=20+s1;
    s2.show();
}
