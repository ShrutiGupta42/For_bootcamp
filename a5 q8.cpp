//count of three digit numbers
#include<iostream>
using namespace std;

int main()
{
	int i, a, sum=0, count=0;
	
	for(i=1; i<=5; i++)
	{
		cin>>a;
		if(a>=100 && a<=999)
		{
			count++; 
		}
	}
	cout<<"the count of three digit no. is:"<<count;
	
	return 0;
}
