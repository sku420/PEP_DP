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
		cin>>n;
		vector<ll>C(n);
		vector<ll>L(n);

		for(int i=0;i<n;i++)
			cin>>C[i];
		for(int i=0;i<n;i++)
			cin>>L[i];

		ll minExp=0,minCost=C[0];
		for(int i=0;i<n;i++)
		{
			minCost=min(minCost,C[i]);
			minExp+=(minCost*L[i]);
		}
		cout<<minExp<<"\n";
	}
	return 0;
}