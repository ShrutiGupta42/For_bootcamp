// sum  of odd integer and count of even integer
#include<iostream>
using namespace std;

int main()
{
	int a, i, count=0, sum=0;
	
	for(i=1; i<=5; i++)
	{
		cin>>a;
		if(a%2==0)
		{
			count++;
		}
		else
		{
			sum=sum+a;
		}
	}
	cout<<"count of even integers:"<<count;
	cout<<"\n sum of odd integers is:"<<sum;
	
	return 0;
}
