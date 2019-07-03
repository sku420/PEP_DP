#include<bits/stdc++.h>
using namespace std;

//BottomUP
void calculateSize(vector<vector<int> >&grid,vector<vector<int> >dp,int m,int n)
{
	int maxArea=0;
	for(int i=0;i<m;i++)
		dp[i][0]=grid[i][0];
	for(int j=0;j<n;j++)
		dp[0][j]=grid[0][j];
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(grid[i][j] and grid[i-1][j] and grid[i][j-1] and grid[i-1][j-1])
				dp[i][j]=min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+1;
			else
				dp[i][j]=grid[i][j];
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			maxArea=max(maxArea,dp[i][j]);
	}

	/*cout<<endl<<"DP Matrix"<<endl;

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}*/
	cout<<maxArea;
}

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;

	vector<vector<int> >grid(n,vector<int>(m,0));
	vector<vector<int> >dp(n,vector<int>(m,0));
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>grid[i][j];
		
	calculateSize(grid,dp,m,n);
	return 0;
}