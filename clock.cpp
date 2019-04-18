#include<iostream>
using namespace std;
class Clock
{
	int mm,ss;
	public :
	Clock(int m, int s);
	Clock();
	Clock sum(Clock a,Clock b);
	void showClock();
	~Clock();
	
};

Clock :: ~Clock()
{

}
Clock::Clock(int m, int s)
	{
		mm=m;
		ss=s;
	}

Clock::Clock()
	{
		mm=0;
		ss=0;
	}

Clock Clock:: sum(Clock a,Clock b)
	{
		 Clock t;
		t.mm= a.mm+b.mm;
		t.ss= a.ss+b.ss;
		t.mm = t.mm+(t.ss/60);
		t.ss = t.ss%60;
		return t;
	}

inline void Clock:: showClock()
	{
		cout<<mm<<":"<<ss<<"\n";
	}

	
int main()
{
	Clock c3;
	int m,s;
	cout<<"\nEnter 1st clock time:\t";
	cin>>m>>s;
	Clock c1(m,s);
	cout<<"\nEnter 2nd clock time:\t";
	cin>>m>>s;
	Clock c2(m,s);
	c3=c3.sum(c1,c2);
	 c3.showClock();
	return 0;
}

