#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,ans=0;
	cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(int i=0;i<n;i++)
		ans+=abs(a[i]-b[i]);
	cout<<ans; 
	return 0;
}