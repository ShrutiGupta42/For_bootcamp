//avg of number
#include<iostream>
using namespace std;

int main()
{
	int sum=0, a,i,n;
	float avg;
	
	cout<<"enter how many number you want to enter:";
	cin>>n;
	
	for(i=0; i<=n; i++)
	{
		cin>>a;
		sum= sum+a;
	}
	avg=sum/n;
	
	cout<<"the avg of the entered numbers is:"<<avg;
	
	return 0;
}
