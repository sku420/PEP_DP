#include <bits/stdc++.h>
using namespace std;

int countRats(vector<int>&rats,int n)
{
	int count=0;
	unordered_map<int,int>m;
	for(int i=0;i<n;i++)
	{
		if(!rats[i])
			count++;
		else if(m.find(rats[i])==m.end())
		{
			count+=(rats[i]+1);
			m[rats[i]]=0;
		}
		else
		{
			m[rats[i]]++;
			if(m[rats[i]]==rats[i])
				m.erase(rats[i]);
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>rats(n);
	for(int i=0;i<n;i++)
		cin>>rats[i];
	cout<<countRats(rats,n);
	return 0;
}