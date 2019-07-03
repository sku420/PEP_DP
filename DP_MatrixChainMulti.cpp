#include <bits/stdc++.h>
using namespace std;

int mcm(vector<int>&matrices,int i,int j,vector<vector<int> >&dp)
{
	if(abs(i-j)==1)
		return 0;
	if(dp[i][j])
		return dp[i][j];
	int result=INT_MAX;
	for(int k=i;k<=j-2;k++)
		result=min(result, mcm(matrices,i,k+1,dp)+mcm(matrices,k+1,j,dp) + matrices[i-1]*matrices[k]*matrices[j-1]);
	dp[i][j]=result;
	return result;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	vector<int>matrices(n);
	for(int i=0;i<n;i++)
		cin>>matrices[i];
	vector<vector<int> >dp(n+1,vector<int>(n+1,0));
	cout<<mcm(matrices,1,n,dp);
	return 0;
}