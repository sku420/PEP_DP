#include <bits/stdc++.h>
using namespace std;

long long int binary(long long int l,long long int r,long long int n,long long int m,long long int x,long long int y)
{
	long long int mid,ans=0;
	while(l<=r)
	{
		mid=(l+r)/2;
		if((n-mid)*y+ m >= mid*x)
		{
			ans=mid;
			l=mid+1;
		}
		else
			r=mid-1;
	}
	return ans;
}
int main()
{
	long long int n,m,x,y;
	cin>>n>>m>>x>>y;
	cout<<binary(0,n,n,m,x,y);
}
