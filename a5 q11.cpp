//count of (+)ve, (-)ve, and zero integers
#include<iostream>
using namespace std;

int main()
{
	int i, a, x=0, y=0, z=0;
	
	for(i=1; i<=5; i++)
	{
		cin>>a;
		
		if(a>0)
		{ 
		  x++;
		}
		else if(a<0)
		{
			y++;
		}
		else
		{
			z++;
		}
	}
	cout<<"the count of positive integers is:"<<x;
	cout<<" \n the count of negative integers is:"<<y;
	cout<<" \n the count of zero is:"<<z;
	
	return 0;
}
