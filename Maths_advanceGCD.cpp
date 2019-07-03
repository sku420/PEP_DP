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
	string a,b;
	cin>>a>>b;
	int res=0;
	int b1=stoi(b);
	for(int i=0;i<a.size();i++)
		res=(res*10+a[i]-48)%b1;
	cout<<gcd(res,b1);
	return 0;
}
