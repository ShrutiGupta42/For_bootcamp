//print the sum of digits of number
#include<iostream>
using namespace std;

int main()
{
	int sum=0, rem=0, n, i;
	
	 cout<<"enter the number:";
	 cin>>n;
	for(sum=0; n>0; n=n/10)
	{
		rem=n%10;
		sum= sum+rem;
   	}
   	cout<<"the sum of digits of number is:"<<sum;
   	
   	return 0;
}
