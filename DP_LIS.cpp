#include <bits/stdc++.h>
using namespace std;


void liS(vector<int> &arr,vector<int>&lis,int n)
{ 
     for (int i=1;i<n;i++) 
    { 
        for (int j=0;j<i;j++) 
            if (arr[i]>arr[j] && lis[i]<lis[j]+1) 
                lis[i]=lis[j]+1;  
    } 

    cout<<*max_element(lis.begin(), lis.end());

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>v(n);
	vector<int>dp(n,1);
	for(int i=0;i<n;i++)
		cin>>v[i];
	liS(v,dp,n);
	return 0;
}