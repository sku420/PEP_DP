#include <bits/stdc++.h>
using namespace std;

int discount(int arr[],int n)
{
	int cost=0;
	cost+=arr[0];
	cost+=(abs(arr[0]-arr[1]));
	for(int i=2;i<n;i++)
	{
		cost+=max(1-min(arr[i-2],arr[i-1]),0);
	}
	return cost;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<discount(arr,n);
	return 0;
}