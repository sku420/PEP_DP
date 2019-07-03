#include <bits/stdc++.h>
using namespace std;

string xorop(string s1,string s2)
{
	string ans="";
	for(int i=0;i<s1.size();i++)
	{
		ans+=to_string((s1[i]-48)^(s2[i]-48));
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		cout<<xorop(s1,s2)<<endl;
	}
	return 0;
}