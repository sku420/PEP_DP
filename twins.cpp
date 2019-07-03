#include <bits/stdc++.h>
using namespace std;

int countTwins(string s)
{
	if(s.size()==1)
		return 0;
	if(s[0]==s[2])
		return countTwins(s.substr(1))+1;
	return countTwins(s.substr(1));
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	cout<<countTwins(s);

	return 0;
}