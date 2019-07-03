#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, k;
	cin>>n>>k;
	vector<int>v(n);
	unordered_map<int, int> m;
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++)
		m[v[i]]=i;

	for(int i=n;i>=1;i--) 
	{
		if(!k)
			break;
		if(m[i]==n-i)
			continue;
		int corr=n-i,curr=m[i];

		swap(v[corr],v[curr]);
		m[i]=corr;
		m[v[curr]]=curr;
		k--;
	}
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	return 0;
}