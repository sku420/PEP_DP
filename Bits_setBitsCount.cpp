#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
	ll b;
	cin>>b;
	ll count=0,count2=0,count3=0,b1=b,b2=b;
	while(b)   //O(log(b))
	{
		if(b&1)
			count++;
		b=b>>1;
	}
	while(b1)
	{
		b1=b1&(b1-1);
		count2++;
	}
	while(b2)
	{
		b2=b2-b2&(-b2);
		count3++;
	}
	cout<<count<<endl<<count2<<endl<<count3;
	return 0;
}