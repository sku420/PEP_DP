#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
	ll a,b,c;
	cin>>a>>b>>c;
	ll result=1;
	while(b)
	{
		if(b&1)
			result=((result%c)*(a%c))%c;
		a=((a%c)*(a%c))%c;
		b=b>>1;
	}
	cout<<result<<endl;
	return 0;
}