#include<bits/stdc++.h>
using namespace std;

int cutRope(int n)
{
	if(n==0 || n==1 || n==2 || n==3)
		return n;
	int result=INT_MIN;
	for(int i=1;i<n;i++)
	{
		result=max(result,cutRope(n-i)*cutRope(i));
	}
	return result;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<cutRope(n);
	return 0;
}