#include <bits/stdc++.h>
using namespace std;

bool isTrue(string s,string temp)
{
	if(!s.size())
		return true;
	if(temp=="b")
		isTrue(s.substr(1),"a");
	else
		return false;
	if(temp=="a")
	{
		if(s[0]=='a')
			isTrue(s.substr(1),"a");
		else if(s.size()>=2 and s[0]=='b' and s[1]=='b')
			isTrue(s.substr(1),"bb");
		else
			return false;
	}
}
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	if(isTrue(s,"b"))
		cout<<"true";
	else
		cout<<"false";
	return 0;
}