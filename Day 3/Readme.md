# C++ PROGRAMMING DAY 3

## Topics Covered

* What are control statements
* if-else
* Loops
   * While loop
   * do-while loop
   * For loop
* Goto
* Switch

## Theory

Read from the presentation

## Code Snippets

Usage of **if else** 

Program to find out grade of students when marks of 4 subjects are given

Marks range | Grade Assigned
------------ | -------------
p>=85 | A
p<85 and p>=70 | B
p<70 and p>=55  | C
p<55 and p>=40  | D
p<40 | E

```cpp
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
```

Practice Questions
1. Find larger of two numbers.
2. Find given number is negative or positive.
3. Find if a year is leap year or not.


Usage of **Loops** 

Program to print 1 to n using while, do-while, for loops.

```cpp
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

```

Program to print sum of digits of given number

```cpp
#include<iostream.h>
using namespace std;
i#include<iostream>
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
```


Program to print fibonacci numbers series

    0,1,1,2,3,5,8,13,21.....

```cpp
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
```

Common Infinite loop Mistakes 

```cpp
/*
    	for( ;  ; )
	{
	  cout<<"hello";
	}
	-------------------------
	
	while(1)
	{
	  cout<<"hello";
	}
	-------------------------------
	do{
	      cout<<"hello";
	}while(1);
	-----------------------------
	int i=1;
	while(i<=5)
	{
	   cout<<"hello";
	}
	--------------------------------
	
	for(i=3;i<5;i--)
	{
	   cout<<"hello";
	}
	
*/
```

Check whether a number is Prime or not

```cpp
#include<iostream>
using namespace std;
int main()
{

    int n, i, flag = 0;
    cout<<"Enter a positive integer: ";
    cin>>n;

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && n!=1)
        cout<<n<<" is a prime number.";
    else
        cout<<n<<" is not a prime number.";

    return 0;
}

```


Usage of **continue** statement

```cpp
#include<iostream>
using namespace std;
int main()
{
    int i=1;
	for(i=0;i<10;i++)
	{
		if(i%3==0)
		{
			continue;
			cout<<"hello";
			cout<<"hi";
		}
		cout<<i<<endl;
	}
	return 0;
}

```

Usage of **goto** statement

```cpp
#include<iostream>
using namespace std;
int main()
{
    	int n;
	cin>>n;
	if(n%2==0)
		goto even;
	else
		goto odd;

	even:
		cout<<"Number is even";
		goto end;

    	odd:
	     	cout<<"Number is odd";
		 goto end;

	end:
	     return 0;
}
	
```
Usage of **switch-case** to make a calculator

```cpp
#include<iostream>
using namespace std;
int main()
{
	char op;
    int a, b;
    cin>>op>>a>>b;

    switch (op) {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;
    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;
    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b;
        break;
    case '/':
        cout<<a<<" / "<<b<<" = "<<a/b;
        break;
    case '%':
        cout<<a<<" % "<<b<<" = "<<a%b;
        break;
    // operator doesn't match any case constant
    default:
        cout<<"Error! operator is not correct";
    }

    return 0;
}
```
