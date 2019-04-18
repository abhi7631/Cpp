#include<iostream>
using namespace std;

void atz(char );

void atz(char c)
{
	if(c=='z')
	{
		cout<<c<<"\tA.S.C.I.I =\t"<<(int )c<<endl;
		return;
	}
	else if(c=='9')
	{
		cout<<c<<"\tA.S.C.I.I =\t"<<(int )c<<endl;
		return;
	}
	cout<<c<<"\tA.S.C.I.I =\t"<<(int )c<<endl;
	atz(++c);
}

int main()
{
	atz('a');
	atz('0');
	return 0;
}
