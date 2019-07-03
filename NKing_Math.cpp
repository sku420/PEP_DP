#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if(n==1 || n==2)
		cout<<"1";
	else if(n%2==0)
		cout<<(n*n)/4;
	else
		cout<<((n+1)*(n+1))/4;
	return 0;
}