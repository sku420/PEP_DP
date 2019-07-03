#include <bits/stdc++.h>
using namespace std;


//BottomUP
void lcsDP(string s1,string s2,vector<vector<int> >&dp)
{
	for(int i=1;i<=s1.size();i++)
	{
		
		for(int j=1;j<=s2.size();j++)
		{
			if(s1[i-1]==s2[j-1] and i!=j)
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		}
	}
}


int main()
{
	string s1;
	cin>>s1;
	vector<vector<int> >dp(s1.size()+1,vector<int>(s1.size()+1,0));
	lcsDP(s1,s1,dp);
	cout<<dp[s1.size()][s1.size()];
	return 0;
}
