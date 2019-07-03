#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
	return a.second<b.second;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<pair<ll,ll> >circle(n);
	for(int i=0;i<n;i++)
	{
		ll r,c;
		cin>>c>>r;
		circle[i]={c-r,c+r};
	}
	sort(circle.begin(),circle.end(),cmp);
	int count=0;
	pair<ll,ll>curr=circle[0];
	for(int i=1;i<n;i++)
	{
		if(circle[i].first<curr.second)
		{
			count++;
			//cout<<circle[i].first<<" "<<circle[i].second<<endl;
			
		}
		else
			curr=circle[i];

	}
	cout<<count<<endl;
	return 0;
}