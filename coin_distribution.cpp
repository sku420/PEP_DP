#include<bits/stdc++.h>
using namespace std;

int game(vector<int>&v,int n,char player)
{
	int evenSum=0,oddSum=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
			evenSum+=v[i-1];
		else
			oddSum+=v[i-1];
	}
	if(oddSum==evenSum)
	{
		cout<<"Draw"<<endl;
		return 0;
	}
	cout<<player<<" Will Win With";
	if(oddSum>evenSum)
		return oddSum;
	else
		return evenSum;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	char p;
	cin>>p;
	cout<<game(v,n,p);
	
	return 0;
}