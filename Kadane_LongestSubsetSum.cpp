#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>&v){
        
        int max1=nums[0];
        int sum1=nums[0];
        for(int i=1;i<nums.size();i++){
            sum1=(nums[i]>(sum1+nums[i]))?nums[i]:(nums[i]+sum1);
            max1=max(sum1,max1);
        }
        return max1;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		cout<<maxSubArray(v)<<"\n;

	}
	return 0;
}