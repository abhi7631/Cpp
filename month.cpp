#include<iostream>
using namespace std;
struct month
{
	char name[12];
	int day;
};
int main()
{
	struct month m[12]={{"January",31},{"February",28},{"March",31},{"April",30},{"May",31},{"June",30},{"July",31},{"August",31},{"September",30},{"October",31},{"November",30},{"December",31}};
struct month *p=m;	
for(int i=0;i<12;i++,p++)
	{
		cout<<p->name<<"-"<<p->day<<"\n";
	}
}

