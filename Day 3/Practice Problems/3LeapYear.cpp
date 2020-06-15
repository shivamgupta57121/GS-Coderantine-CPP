//Program to find whether a year is leap or not

#include<iostream>
using namespace std;
int main()
{
	int year;
	cin>>year;

	if(year%100!=0)
	{
		if(year%4==0)
			cout<<"leap year\n";
		 else
			cout<<"not leap\n";
	 }
     	else
     	{
		if(year%400==0)
			cout<<"leap year\n";
		else
			cout<<"not leap year\n";
	 }
     return 0;
}