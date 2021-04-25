//display the maximum no
#include<iostream>
using namespace std;

int main()
{
	int i, a, max=0;
	for(i=1; i<=5; i++)
	{
		cin>>a;
		if(max<a)
		{
			max=a;
		}
	}
	cout<<"the greatest is:"<<max;
	
	return 0;
}
