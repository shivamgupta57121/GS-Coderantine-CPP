//Program to print 1 to n using while, do-while, for loops.

#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	// Using while loop
	cout<<"Using while loop: "<<endl;
	int i=1;
	while(i<=num)
	{
		cout<<i<<" ";
		i++;
	}
	cout<<endl;

	// Using do-while loop
	cout<<"Using do-while loop: "<<endl;
	i=1;
	do
	{
		cout<<i<<" ";
		i++;
	}while(i<=num);
	cout<<endl;

	//Using for loop
	cout<<"Using for loop: "<<endl;
	for(i=1;i<=num;i++) cout<<i<<" ";

	return 0;
}
