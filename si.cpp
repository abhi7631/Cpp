#include<iostream>
using namespace std;

int main()
{
	double rate, time,principal,si=0.0;
	cout<<"Enter principal\n"<<endl;
	cin>>principal;
	cout<<"Enter Rate\n"<<endl;
	cin>>rate;
	cout<<"Enter time in years\n"<<endl;
	cin>>time;
	si=principal*rate*time/100;
	cout<<"\nSimple Interest=\t"<<si<<endl;
	return 0;
}
