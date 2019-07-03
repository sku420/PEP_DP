#include <bits/stdc++.h>
using namespace std;

int binary(int l,int r,int q)
{
	int mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(mid*mid==q)
			return mid;
		else if(mid*mid<q)
			l=mid+1;
		else
			r=mid-1;
	}
	return floor(mid);
}
int main()
{
	int n;
	cin>>n;
	cout<<"Sqrt "<<binary(1,n,n);
}