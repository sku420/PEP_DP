#include <bits/stdc++.h>
using namespace std;


//BottomUP
void lcsDP(string s1,vector<vector<int> >&dp)
{
	for(int i=0;i<s1.size();i++)
		dp[i][i]=1;

	for(int l=2;l<=s1.size();l++)
	{
		
		for(int i=0;i<=s1.size()-l;i++)
		{
			int j=i+l-1;
			if(s1[i]==s1[j] and l==2)
				dp[i][j]=2;
			else if(s1[i]==s1[j])
				dp[i][j]=dp[i+1][j-1]+2;
			else
				dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
		}
	}
}


int main()
{
	string s1;
	cin>>s1;
	vector<vector<int> >dp(s1.size()+1,vector<int>(s1.size()+1,0));
	lcsDP(s1,dp);
	cout<<dp[0][s1.size()-1];
	return 0;
}
