#include <bits/stdc++.h>
using namespace std;


void liS(vector<int> &arr,vector<int>&lis,vector<int>&lis2,int n)
{ 
    for (int i=1;i<n;i++) 
    { 
        for (int j=0;j<i;j++) 
            if (arr[i]>arr[j] && lis[i]< (lis[j]+arr[i]))
                lis[i]=lis[j]+arr[i];  
    } 

    for (int i=n-2;i>=0;i--) 
    { 
        for (int j=n-1;j>i;j--) 
            if (arr[i]>arr[j] && lis2[i]<(lis2[j]+arr[i]))
                lis2[i]=lis2[j]+arr[i];  
    } 

    /*cout<<"lis: ";
    for(int i=0;i<n;i++)
    	cout<<lis[i]<<" ";

    cout<<"\nlis2: ";
    for(int i=0;i<n;i++)
    	cout<<lis2[i]<<" ";*/

    vector<int> v(n);
    for(int i=0;i<n;i++)
    	v[i]=(lis[i]+lis2[i])-arr[i];

    cout<<*max_element(v.begin(), v.end());
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	vector<int>dp(v);
	vector<int>dp2(v);
	liS(v,dp,dp2,n);
	return 0;
}

/*

9
1 15 51 45 33 100 12 18 9
*/