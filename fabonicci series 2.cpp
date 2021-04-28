//fabonicci series 2
#include<iostream>
using namespace std;

int main()
{
	int f, s, next, a, i;
	f=0;
	s=1;
	next=0;
	
	cout<<"Enter the number of terms of fabonicci series:";
	cin>>a;
	
	for(i=0; i<a; i++)
	{
		if(i<=1)
		{
			next=i;
			cout<<next<<endl;
		}
		else
		{
			next=f+s;
			cout<<next<<endl;
			f=s;
			s=next;
			
		}
	}
	
	return 0;
}
