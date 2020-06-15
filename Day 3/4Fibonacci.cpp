//Program to print Fibonacci numbers series

#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	int i,n;
	x=0; y=1;
	cin>>n;
	cout<<x<<" ";
	cout<<y<<" ";
	for(i=2;i<n;i++)
	{
		z=x+y;
		cout<<z<<" ";
		x=y;
		y=z;
	}
	return 0;
}