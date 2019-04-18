#include<iostream>
#include<cstdlib>
using namespace std;
int sum(int a , char op,int b)
{	switch(op)
	{
		case '+': return(a+b);
			  break;
		case '-': return(a-b);
			  break ;
		case '*': return(a*b);
			  break;
		case '/': return(a/b);
			  break;
		default: cout<< "\nEnter a valid operator:";
	}
	return 0;
}

int main(int argc,char * argv[])
{
	char op = argv[2][0];
	cout<<"\nResult = "<<sum(atoi(argv[1]),op,atoi(argv[3]));
	return 0;	
}
