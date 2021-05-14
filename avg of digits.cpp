//avg of digits of a number
#include<iostream>
using namespace std;

int main()
{
	int n,sum=0, i, count=0, r;
	float avg=0;
	
	cout<<"enter the number:";
	cin>>n;
	
	for(i=n; i>0; i=i/10)
	{
		r=i%10;
		sum=sum+r;
		count++;
	}
	 avg=sum/count;
	 
	 cout<<"the avg of the digits of the number is:"<<avg;
	 
	 return 0;
}
