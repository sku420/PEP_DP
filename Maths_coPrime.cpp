#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	vector<double>prime(1000);
	iota(prime.begin(), prime.end(), 0);

	for(int i=2;i<=1000;i++)
	{
		if(prime[i]==i)
		{
			for(int j=i*2;j<=1000;j+=i)
				prime[j]=(prime[j]*(1-1/(double)(i)));
			prime[i]=i-1;
		}
	}

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<=n;i++)
			cout<<prime[i]<<",";

	}
	return 0;
}
