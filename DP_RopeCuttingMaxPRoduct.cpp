#include<bits/stdc++.h>
using namespace std;

int cutRope(vector<int>&dp,int n)
{
	if(n==0 || n==1 || n==2 || n==3)
		return n;
	if(dp[n])
		return dp[n];
	int product=INT_MIN;
	for(int i=1;i<n;i++)
		product=max(product,cutRope(dp,n-i)*cutRope(dp,i));
	dp[n]=product;
	return dp[n];
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>dp(n+1,0);
	cout<<cutRope(dp,n);
	return 0;
}