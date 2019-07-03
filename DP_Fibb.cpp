#include<bits/stdc++.h>
using namespace std;

int fibb(vector<int>&fib,int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(fib[n])
		return fib[n];
	return fib[n]=fibb(fib,n-1)+fibb(fib,n-2);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>fib(n+1);
	/*fib[0]=0;
	fib[1]=1;
	for(int i=2;i<=n;i++)
		fib[i]=fib[i-1]+fib[i-2];*/
	fibb(fib,n);
	for(int i=1;i<=n;i++)
		cout<<fib[i]<<" ";
	return 0;
}