#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b,int &x,int &y)
{
	if(!b)
	{
		x=1,y=10;
		return a;
	}
	int x1,y1;
	int g=gcd(b,a%b,x1,y1); //a%b=(a-floor(a/b)*b)
	x=y1;
	y=(x1-floor(a/b)*y1);
	return g;
}
int main(int argc, char const *argv[])
{
	int a,b=1000000007;
	cin>>a;
	int x,y;
	cout<<gcd(a,b,x,y)<<" "<<x<<" "<<y;
	cout<<(x%b+b)%b;
	return 0;
}
