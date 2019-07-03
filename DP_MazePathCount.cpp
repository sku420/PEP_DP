#include <bits/stdc++.h>
using namespace std;

int countMazePath(vector<vector<int> >&dp,int m,int n)
{
        dp[0][0]=1;
        for(int i=1;i<m;i++)
            dp[i][0]=1;
        for(int j=1;j<n;j++)
            dp[0][j]=1;
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
        return dp[m-1][n-1];
}

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> >dp(m,vector<int>(n,0));
	cout<<countMazePath(dp,m,n);
	return 0;
}


