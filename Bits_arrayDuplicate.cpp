#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	int result=0;
	for(int i=0;i<n;i++)
		result^=v[i];
	cout<<result;
	return 0;
}

/*
	5 1 1 2 3 3 ->2
 */