#include <bits/stdc++.h>
using  namespace std;

int eggDrop(int k,int n)
{
	if(k==0 ||k==1)
		return k;
	if(n==1)
		return k;
	int minStep=INT_MAX;
	for(int x=2;x<n;x++)
		minStep=min(max(eggDrop(k-1,x-1),eggDrop(k,n-x)),minStep);
	return minStep+1;
} 
int main(int argc, char const *argv[])
{
	int k,n;
	cin>>k>>n;
	cout<<eggDrop(k,n);
	return 0;
}