#include<iostream>
#include<cstdlib>
using namespace std;


int occur(char * str, char * key)
{
	int count =0, i=0;
	while(str[i]!='\0')
	{
		if(str[i]== key[0] && str[i+1]==key[1])
		{
			count++;
			i++;
		}
		i++;		
	}
	return count;
}

int main()
{
	char str[100], key [100];
	cout<<"Enter a string"<<endl;
	cin>>str;
	cout<<"Enter key"<<endl;
	cin>>key;
	
	cout<<"No of occurances=\t"<<occur(str, key)<<endl;
	return 0;
}
