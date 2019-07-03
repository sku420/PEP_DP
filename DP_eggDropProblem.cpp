#include <bits/stdc++.h>
using  namespace std;

void eggDrop(int n,int k)
{
	vector<vector<int> >dp(n+1,vector<int>(k+1,INT_MAX));
	for (int i = 0; i <= n; ++i)
	{
		dp[i][0]=0;
		dp[i][1]=1;
	}
	for (int i = 0; i <=k; ++i)
	{
		dp[0][i]=0;
		dp[1][i]=i;
	}
	for (int i = 2; i <=n ; ++i)
	{
		for (int j = 2; j <=k; ++j)
		{
			for (int x = 1; x <=j; ++x)
			{
				int result=max(dp[i-1][x-1],dp[i][j-x])+1;
				dp[i][j]=min(result,dp[i][j]);
			}
		}
	}
	/*cout<<endl;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=k;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}*/
	cout<<dp[n][k];
} 
int main(int argc, char const *argv[])
{
	int k,n;
	cin>>k>>n;
	eggDrop(k,n);
	return 0;
}