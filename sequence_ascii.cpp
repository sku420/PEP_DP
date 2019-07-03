#include<bits/stdc++.h>
using namespace std;

//	 b 98 a ab a98 97 97b 9798

void permuteWithascii(string s, string curr,stack<string>&st,int &count)
{
	if(!s.size())
	{
		st.push(curr);
		count++;
		return;
	}
	char ch=s[0];
	permuteWithascii(s.substr(1),curr+to_string((int)ch),st,count);
	permuteWithascii(s.substr(1),curr+ch,st,count);
	permuteWithascii(s.substr(1),curr,st,count);
}


int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int count=0;
	stack<string>st;
	permuteWithascii(s,"",st,count);
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<"\n"<<count;
	return 0;
}