#include<iostream>
#include<cstdlib>
using namespace std;

int sum(int a , char op , int b){
	
	switch(op)
	{

	case '+':
		return(a+b);
		break;

	case '*': 
		return(a*b);
		break;

	}
	
}


int main(int argc , char* argv[])
{
	//std::cout<< argc<<std::endl;
	char op = argv[2][0];
	cout<< "output:"<< sum(atoi(argv[1]),op,atoi(argv[3]));
	return 0;
}
