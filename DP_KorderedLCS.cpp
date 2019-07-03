#include <bits/stdc++.h>
using namespace std;
vector<vector<vector<int> > >dp(2005,vector<vector<int> >(2005,vector<int>(10,-1)));
/*int kOrdered(int n,int m,vector<int>&v1,vector<int>&v2,int k,int i,int j)
{
	if(i==n or j==m)
		return 0;

	if(dp[i][j][k]!=-1)
		return dp[i][j][k];

	int ans;
	if(v1[i]==v2[j])
	{
		ans=kOrdered(n, m, v1, v2, k, i+1, j+1)+1;
		dp[i][j][k]=ans;
		return ans;
	} 
	else
	{
		int ret1= kOrdered(n,m,v1,v2,k,i+1,j);
		int ret2= kOrdered(n,m,v1,v2,k,i,j+1);
		int ret3= -1;
		if(k>0)
			ret3=kOrdered(n,m,v1,v2,k-1,i+1,j+1)+1;
		ans=max(ret1, max(ret2, ret3));
		dp[i][j][k]=ans;
		return ans;
	}
}*/
int kOrdered(int n, int m, vector<int>&arr1, vector<int>&arr2, int k, int i, int j) {
	if(i == n or j == m) {
		return 0;
	}
	if(dp[i][j][k] != -1) return dp[i][j][k];

	int ans;
	if(arr1[i] == arr2[j]) {
		ans = 1+kOrdered(n, m, arr1, arr2, k, i+1, j+1);
		dp[i][j][k] = ans;
		return ans;
	} else {
		int call1 = kOrdered(n, m, arr1, arr2, k, i+1, j);
		int call2 = kOrdered(n, m, arr1, arr2, k, i, j+1);
		int call3 = -1;
		if(k>0) {
			call3 = 1+kOrdered(n, m, arr1, arr2, k-1, i+1, j+1);
		}
		ans = max(call1, max(call2, call3));
		dp[i][j][k] = ans;
		return ans;

	}
}

int main(int argc, char const *argv[])
{
	int n, m, k;
	cin>>n>>m>>k;
	vector<int>v1(n);
	vector<int>v2(n);
	for(int i=0;i<n;i++)
		cin>>v1[i];
	for(int i=0;i<m;i++)
		cin>>v2[i];
	//vector<vector<vector<int> > >dp(n+1,vector<vector<int> >(m+1,vector<int>(k+1,0)));
	cout<<kOrdered(n,m,v1,v2,k,0,0);
	return 0;
}