#include <bits/stdc++.h>
using namespace std;

int color(vector<int>&mix,int i,int j)
{
	int col=0;
	for (int k = i; k <= j; k++)
		col=((col%100)+(mix[k]%100))%100;
	return col;
}

int mixtures(vector<int>&mix,int i,int j,vector<vector<int> >&dp)
{
	if(i==j)
		return 0;
	if(abs(i-j)==1)
		return mix[i]*mix[j];
	if(dp[i][j])
		return dp[i][j];
	int smoke=INT_MAX;
	for(int k=i+1;k<=j;k++)
	{
		smoke=min(smoke,mixtures(mix,i,k-1,dp)+mixtures(mix,k,j,dp)+(color(mix,i,k-1)*color(mix,k,j)));

	}
	dp[i][j]=smoke;
	return smoke;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>mix(n);
	for(int i=0;i<n;i++)
		cin>>mix[i];
	vector<vector<int> >dp(n+1,vector<int>(n+1,0));
	cout<<mixtures(mix,0,n-1,dp);
	return 0;
}