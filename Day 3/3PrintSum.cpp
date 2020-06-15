//Program to print sum of digits of given number

#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,rem;
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	cout<<"sum of digits "<<sum;
	return 0;
}