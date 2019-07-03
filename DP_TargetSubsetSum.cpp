#include <bits/stdc++.h>
using namespace std;

bool targetSubset(vector<int>&v,int n,int tw)
{
	vector<vector<int> >dp(n+1,vector<int>(tw+1,false));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=tw;j++)
		{
			if(v[i-1]>j)
				dp[i][j]=dp[i-1][j];
			else if(v[i-1]==j)
				dp[i][j]=true;
			else
				dp[i][j]=dp[i-1][j] or dp[i-1][j-v[i-1]];
		}
	}
	return dp[n][tw];
}

int main(int argc, char const *argv[])
{
	int n,target;
	cin>>n>>target;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<targetSubset(v,n,target);
	return 0;
}