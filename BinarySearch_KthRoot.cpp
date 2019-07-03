#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sqrt(ll l,ll r,ll q,ll n)
{
	ll mid,ans=INT_MIN;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(pow(mid,q)<=n)
		{
			ans=max(mid,ans);
			l=mid+1;
		}
		else
			r=mid-1;
	}
	return floor(ans);
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if(k==1)
			cout<<n<<"\n";
		else
			cout<<sqrt(1,n,k,n)<<"\n";
	}
	return 0;
}