#include<iostream>
using namespace std;

struct month
{
	char m[10];
	int d;
};

int main()
{
	int i;
	struct month mon[12]={{"January",31},{"February",28},{"March",30},{"April",31},{"May",31},{"June",30},{"July",31},{"August",31},{"September",30},{"October",31},{"November",30},{"December",31}};
	for(i=0;i<12;i++)
	{
		cout<<mon[i].m<<"\t"<<mon[i].d<<endl;
	}
	return 0;

}
