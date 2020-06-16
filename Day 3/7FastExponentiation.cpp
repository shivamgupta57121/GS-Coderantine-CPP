// Calculate a raised to power b using fast exponentiation approach

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int a,b,ans=1;
	cin>>a>>b;
	while(b){
		if(b&1) ans = ans*a;
		a*=a;
		b = b>>1;
	}
	cout<<ans;
	return 0;
}