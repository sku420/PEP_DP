#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int _0NKnapsack(vector<int>&dp,vector<int>&w,vector<int>&v,int n,int cap)
{
    for(int i =0;i<n;i++){
        for(int j=cap;j>=0;j--){
            dp[j]=(w[i]>j)?dp[j]:max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    return dp[cap];
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>w(n);
	vector<int>v(n);
	for(auto &i:w)
		cin>>i;
	for(auto &i:v)
		cin>>i;
	int cap;
	cin>>cap;
	vector<int>dp(cap+1,0);
	cout<<_0NKnapsack(dp,w,v,n,cap);
	
	return 0;
}