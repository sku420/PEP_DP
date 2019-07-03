#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(!b)
		return a;
	return gcd(b,a%b); //a%b=(a-floor(a/b)*b)
}
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}
