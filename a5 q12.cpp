//print the average of digits of number
#include<iostream>
using namespace std;

int main()
{
	int n, rem=0,count=0;
	float avg=0;
	cout<<"enter the number:";
	cin>>n;
	
	for(avg=0; n>0; n=n/10)
	{
		rem=n%10;
		avg=avg+rem;
		count++;
	}
	avg=avg/count;
	cout<<"the average of the digits of number is:"<<avg;
	
	return 0;
}
