#include<iostream>
#include<cstdlib>
using namespace std;


void claculate(int , char , int );


void calculate(int a, char op, int b)
{
	switch(op)
	{
		case '+': cout<<"SUM=\t"<<(a+b)<<endl;
				break;
		case '-': cout<<"Difference=\t"<<(a-b)<<endl;
				break;
		case '*': cout<<"Product=\t"<<(a*b)<<endl;
				break;
		case '/': cout<<"Quotient=\t"<<(a/b)<<endl;
				break;
		default: cout<<"Wrong input"<<endl;
	}
	return;
} 

int main(int argc,char *argv[])
{
	int a, b;
	char op;

	a= atoi(argv[1]);
	op=argv[2][0];
	b= atoi(argv[3]);
	calculate(a,op,b);
	return 0;
	
}
