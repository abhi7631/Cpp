#include<iostream>
using namespace std;
class Dollar
{
	float d;
	public :
	Dollar(float dd);
	Dollar();
	double convert(float d);
	
};

Dollar::Dollar()
	{
		d=0;
	}

Dollar::Dollar(float dd)
	{
		d=dd;
	}

double Dollar:: convert(float d)
	{
		 
		return((double)60.0f*d);
	}

class Rupee
{
	float r;
	public :
	Rupee(float rr);
	Rupee();
	double convert(float r);
};
Rupee::Rupee()
	{
		r=0;
	}

Rupee::Rupee(float rr)
	{
		r=rr;
	}

double Rupee:: convert(float r)
	{
		 
		return((double)r/60.0f);
	}




	
int main()
{
	float dd, rr, con, con2;
	cout<<"\nEnter amount in dollar to convert into rupees:\t";
	cin>>dd;
	Dollar d1(dd);
	con=d1.convert(dd);
	cout<<"\n:"<<dd<<"\tDollars = \t"<<con<<"\tRupees";
	cout<<"\nEnter amount in rupees to be converted into Dollars:\t";
	cin>>rr;
	Rupee r1(rr);
	con2=r1.convert(rr);
	cout<<"\n:"<<rr<<"\tRupees = \t"<<con2<<"\tDollars";
	return 0;
}

