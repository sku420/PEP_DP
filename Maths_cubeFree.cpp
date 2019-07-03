#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
	vector<ll>prime(1000000,1);
	vector<string>pos(1000000);
	prime[0]=0,pos[0]="0";
	prime[1]=1,pos[1]="1";
	
	for(ll i=2;pow(i,3)<1000000;i++)
		for(ll j=3;pow(i,j)<1000000;j++)
			prime[pow(i,j)]=0;
	for(ll i=2;i<1000000;i++)
	{
		if(prime[i])
			pos[i]=to_string(i);
		else
			pos[i]="Not Cube Free";
	}
	int t,c=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<"Case "<<c<<": "<<pos[n]<<endl;
		c++;
	}
	return 0;
}