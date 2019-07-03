// 10 1 1 1 0 1 2 2 0 1 2


#include <bits/stdc++.h>
using namespace std;

void dnf(vector<int>&v,int n)
{
	int start=0,mid=0,end=n-1;
	while(mid<=end)
	{
		if(v[mid]==1)
			mid++;
		else if(v[mid]==0)
		{
			swap(v[start],v[mid]);
			start++;
			mid++;
		}
		else
		{
			swap(v[mid],v[end]);
			end--;
		}
	}
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
}

int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	dnf(v,n);
	return 0;
}