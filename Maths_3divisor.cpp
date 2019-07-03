#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int>prime(1000,1);
	prime[0]=0;
	prime[1]=0;
	
	for(int i=2;i<=sqrt(1000);i++)
		for(int j=i;j*i<1000;j++)
			prime[j*i]=0;

	for(int i=0;i<=100;i++)
		cout<<prime[i]<<" ";
	cout<<endl;

	for(int i=1;i<1000;i++)
		prime[i]+=prime[i-1];
	for(int i=0;i<100;i++)
		cout<<prime[i]<<" ";
	cout<<endl;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<prime[sqrt(n)]<<endl;
	}
	return 0;
}