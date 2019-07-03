#include <bits/stdc++.h>
using namespace std;

int binary(vector<int>v,int l,int r,int q)
{
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(v[mid]==q)
			return mid;
		else if(v[mid]<q)
			l=mid+1;
		else
			r=mid-1;
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	int q;
	cin>>q;
	cout<<"Present @ "<<binary(v,0,n-1,q);
}