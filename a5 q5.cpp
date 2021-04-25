//aceepting 5 integrs and printing their sum
#include<iostream>
using namespace std;

int main()
{
	int i, a, sum=0;
	for(i=1; i<=5; i++)
	{
		cin>>a;
		sum=sum+a;
	}
	cout<<"the sum these integers is:"<<sum;
	
	return 0;
}
