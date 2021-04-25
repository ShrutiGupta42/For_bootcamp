// printing count of three digit odd numbers
#include<iostream>
using namespace std;

int main()
{
	int i, a, count=0;
	
	for(i=1; i<=10; i++)
	{
		cin>>a;
		if(a>=100 && a<=999 && a%2!=0)
		{
			count++;
		}
	}
	cout<<"the count of three digit odd interger is:"<<count;
	
	return 0;
}
