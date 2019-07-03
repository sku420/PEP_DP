#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
	ll n,p;
	cin>>n>>p;
	vector<ll>inv(n+1,0);
	inv[1]=1;
	for(int i=2;i<=n;i++)
	{
		inv[i]=((p-(p/i)*inv[p%i]%p)%p);
	}
	for(auto i:inv)
		cout<<i<<" ";
	return 0;
}