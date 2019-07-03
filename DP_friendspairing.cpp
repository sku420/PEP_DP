#include <bits/stdc++.h>
using namespace std;

int friends(vector<int>&dp,int n)
{
	if(n==0 or n==1)
	{
		dp[n]=1;
		return dp[n];
	}
	if(n==2)
	{
		dp[n]=2;
		return dp[n];
	}
	if(dp[n])
		return dp[n];
	return dp[n]= friends(dp,n-1) + ((n-1)*friends(dp,n-2));
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>dp(n+1);
	friends(dp,n);
	cout<<dp[n];
	return 0;
}