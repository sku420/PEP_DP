#include <bits/stdc++.h>
using namespace std;

int search(vector<int>&A,int n,int B)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(A[mid]==B)
			return mid;
		if(A[mid]>=A[low])
		{
			if(A[low]<=B and B<A[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		else
		{
			if(A[mid]<B and B<=A[high])
				low=mid+1;
			else
				high=mid-1;
		}
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int ele;
	cin>>ele;
	cout<<search(arr,n,ele);
	return 0;
}