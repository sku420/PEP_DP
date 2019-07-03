#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int countSetBit(int n)
{
	int count=0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	return count;
}
int main(int argc, char const *argv[])
{
	vector<int>pre(1000000,0);
	for(int i=0;i<1000000;i++)
		pre[i]=countSetBit(i);

	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		int count=0;
		for(int i=l;i<=r;i++)
			count+=pre[i];
		cout<<count<<endl;
	}
	
	return 0;
}