#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)
{
	if(s1.size()!=s2.size())
		return false;
	else
	{
		vector<int>frq1(26,0);
		vector<int>frq2(26,0);
		for(int i=0;i<s1.size();i++)
			frq1[s1[i]-'a']++;
		for(int i=0;i<s2.size();i++)
			frq2[s2[i]-'a']++;

		for(int i=0;i<26;i++)
			if(frq1[i]!=frq2[i])
				return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<isAnagram(s1,s2);
	return 0;
}