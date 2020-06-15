// Create a basic calculator

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