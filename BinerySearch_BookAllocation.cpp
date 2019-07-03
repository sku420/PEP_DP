#include <bits/stdc++.h>
using namespace std;

int required(vector<int>&pages, int mid, int n)
{
	int total=0,reader=1;
	for(int i=0;i<n;i++)
	{
		total+=pages[i];
		if(total>mid)
		{
			total=pages[i];
			reader+=1;
		}
	}
	return reader;
}

int books(vector<int>&pages,int m,int n)
{
	if(n<m)
		return -1;
	int low= *max_element(pages.begin(), pages.end());
	int high=0,mid;

	for(int i=0;i<n;i++)
		high+=pages[i];


	while(low<high)
	{
		mid=(low+high)/2;
		int readers=required(pages,mid,n);
		if(readers<=m)
			high=mid;
		else
			low=mid+1;
	}
	return low;
}

int main(int argc, char const *argv[])
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		vector<int>pages(n);
		for(int i=0;i<n;i++)
			cin>>pages[i];
		cout<<books(pages,m,n)<<"\n";
	}
	return 0;
}