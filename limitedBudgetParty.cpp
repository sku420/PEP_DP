#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		ll x;
		cin>>n>>x;
		vector<ll>cost(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>cost[i];
		}
		for (int i = 1; i < n; ++i)
		{
			cost[i]+=cost[i-1];
		}
		int l=0,h=n-1;
		while(l<=h)
		{
			if(cost[l]-cost[h]==x)
			{
				cout<<"YES"<<"\n";
				break;
			}
			if(cost[l]-cost[h]>x)
				l++;
			else
				h--;


		}
		cout<<"NO"<<"\n";

		
	}
	return 0;
}