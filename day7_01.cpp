#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
class Account {
    static string bank_name;
    int bal;
    public:
    Account(int d)
    {
        bal=d;
    }
    void deposit(int a)
    {
        bal=bal+a;
    }
    void withdraw(int a)
    {
        bal=bal-a;
    }
    void display()
    {
        cout<<"bank name = "<<bank_name<<endl;
        cout<<"current bal= "<<bal<<endl;
    }
};
class SA : public Account
{
    int accno,intr;
    public:
    SA(int an,int r,int d):Account( d)
    {
        accno=an;
        intr=r;
    }
    void shows()
    {
        cout<<"acc no = "<<accno<<endl;
        cout<<"intrate = "<<intr<<endl;
        display();
    }
};
/*class RA : public Account
{
    int accno,intr;
    public:
    RA(int an,int r)
    {
        accno=an;
        intr=r;
    }
    void shows()
    {
        cout<<"acc no = "<<accno<<endl;
        cout<<"intrate = "<<intr<<endl;
        display();
    }
};*/
string Account :: bank_name="SBI";
int main()
{
    int accn,ch,intr,dep;
    cout<<"enter 3 value"<<endl;
    cin>>accn>>intr>>dep;
    SA obj(accn,intr,dep);
    obj.shows();
    while(1){
    cout<<"1.dep\n2.with\n3.display\n4.exit"<<endl;
    cin>>ch;
    switch(ch)
    {
     case 1: cout<<"enet amt"<<endl;
              int a;
              cin>>a;
              obj.deposit(a);
              break;
      case 2: cout<<"enet amt"<<endl;
              int a1;
              cin>>a1;
              obj.withdraw(a1);
              break;
    case 3 :obj.shows();
            break;
    case 4: exit(0);

    }
    }
}
