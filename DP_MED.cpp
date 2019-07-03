#include <bits/stdc++.h>
using namespace std;

int minEditDis(vector<vector<int> >&dp, string s1, string s2, int m, int n)
{
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
				dp[i][j]=j;
			else if(j==0)
				dp[i][j]=i;
			else if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
		}
	}
	return dp[m][n];
}

int main(int argc, char const *argv[])
{
	string s1,s2;
	cin>>s1>>s2;
	int m=s1.size(),n=s2.size();
	vector<vector<int> >dp(m+1,vector<int>(n+1,0));
	cout<<minEditDis(dp,s1,s2,m,n);
	return 0;
}