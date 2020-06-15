//Program to find out grade of students when marks of 4 subjects are given

/* Criteria to find grade : 
p>=85 | A
p<85 and p>=70 | B
p<70 and p>=55  | C
p<55 and p>=40  | D
p<40 | E
*/ 

#include<iostream>
using namespace std;
int main()
{
	float m1,m2,m3,m4,total,per;
	char g;
	cin>>m1>>m2>>m3>>m4;
	total = m1+m2+m3+m4;
	per = total/4;
	if(per>=85)
		g='A';
	else if(per>=70)
		g='B';
	else if(per>=55)
		g='C';
	else if(per>=40)
		g='D';
	else
		g='E';

	cout<<"percentage is "<<per<<endl<<"grade is "<<g;

	return 0;
}
