#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
	ll a,b;
	ll c=1000000007;
	cin>>a>>b;

	cout<<"a+b: "<<((a%c)+(b%c))%c<<endl;
	cout<<"a-b: "<<((a%c)-(b%c)+c)%c<<endl;
	cout<<"a*b: "<<((a%c)*(b%c))%c<<endl;
	return 0;
}