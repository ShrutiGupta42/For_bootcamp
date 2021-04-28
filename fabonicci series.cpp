//fabonicci series
#include<iostream>
using namespace std;

int main()
{
	int f, s, , next=0, a,i;
	
	cout<<"enter the number of terms in fabonicci series:";
	cin>>a;
	f=0;
	s=1;
	cout<<f<<endl<<s<<endl;
	for(i=2; i<a; i++)
	{
		next=f+s;
		cout<<next<<endl;
		f=s;
		s=next;
	}
	
	return 0;
}
