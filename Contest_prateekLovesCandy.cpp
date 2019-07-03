#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int>prime(1000000,1);
	prime[0]=0;
	prime[1]=0;
	
	for(int i=2;i<=sqrt(1000000);i++)
	{
		for(int j=i*2;j<=1000000;j+=i)
			prime[j]=0;
	}
	vector<int>prim;
	for(int i=0;i<=1000000;i++)
	    if(prime[i])
	        prim.push_back(i);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<prim[n-1]<<endl;
	}
	return 0;
}