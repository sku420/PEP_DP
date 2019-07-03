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
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		prime[n]?cout<<"Prime\n":cout<<"False\n";
	}
	return 0;
}