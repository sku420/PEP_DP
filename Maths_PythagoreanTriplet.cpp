#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
	ll x;
	cin>>x;
	if(x%2==0)
	{
		cout<<x<<" "<<" "<<((x*x)-4)/4<<((x*x)+4)/4;
	}
	else
	{
		cout<<x<<" "<<" "<<((x*x)-1)/2<<((x*x)+1)/2;
	}
	return 0;
}