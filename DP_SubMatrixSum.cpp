#include<bits/stdc++.h>
using namespace std;


int maxSubArray(vector<int>&nums){
        
        int max1=nums[0];
        int sum1=nums[0];
        for(int i=1;i<nums.size();i++){
            sum1=(nums[i]>(sum1+nums[i]))?nums[i]:(nums[i]+sum1);
            max1=max(sum1,max1);
        }
        return max1;
}


void calculateSize(vector<vector<int> >&grid,int m,int n)
{
	int max1=INT_MIN;
	for(int i=0;i<n;i++)
	{
		vector<int>temp(n,0);
		for(int j=i;j<m;j++)
		{
			for(int k=0;k<n;k++)
				temp[k]+=grid[k][j];
			max1=max(max1,maxSubArray(temp));
		}
		temp.clear();
	}
	cout<<max1<<endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>n>>m;

		vector<vector<int> >grid(n,vector<int>(m,0));
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>grid[i][j];
			
		calculateSize(grid,m,n);
	}
	return 0;
}