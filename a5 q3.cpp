//table of integer
#include<iostream>
using namespace std;

int main()
{
	int n,i,c;
	cout<<"enter the number of which table has to printed:";
	cin>>n;
	
	for(i=1; i<=20; i++)
	{
		c=n*i;
		cout<<n<<"*"<<i<<"="<<c;
		cout<<"\n";
	}
	return 0;
}
