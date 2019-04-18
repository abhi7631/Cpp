#include<iostream>
using namespace std;

void month()
{
	int i;
	char m[][10]=					{"january","february","march","april","may","june","july","august","september",
"october","november","december"};
	int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<12;i++)
	{
	cout<< m[i] << " "<<d[i] <<"\n";
	}
	return;
}
int main()
{
	month();
	return 0;
}
