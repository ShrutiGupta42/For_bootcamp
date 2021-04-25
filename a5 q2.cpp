//printing even numbers
#include<iostream>
using namespace std;

int main()
{
	int i, a, b;
	cout<<"enter the first no. of range:";
	cin>>a;
	cout<<"enter the second no. of range:";
	cin>>b;
	
	for(i=a; i<=b; i++)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
