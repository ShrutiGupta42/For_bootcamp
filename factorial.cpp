//factorial of a number
#include<iostream>
using namespace std;

int main()
{
	int i,n,a;
	cout<<"Enter the number of which factorial is to be done:";
	cin>>n;
	a=1;
	
	for(i=1; i<=n; i++)
	{
		a=a*i;
	}
	
	cout<<"the factorial of the number is:"<<a;
	
	return 0;
}
