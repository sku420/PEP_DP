#include<bits/stdc++.h>
using namespace std;


struct item
{
    int value,weight;
};

bool cmp(item a,item b)
{
    return a.value*b.weight<b.value*b.weight;
}

double knapsack(item arr[], int n, int c)
{
    double total=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<=c)
        {
            total+=arr[i].value;
            c=c-arr[i].weight;
        }
        else if(c>0)
        {
            total+=((arr[i].value/arr[i].weight)*c);
            c=0;
        }
    }
    return total;
}
int main()
{
	int n;
	cin>>n;
	item arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i].value;
	for(int i=0;i<n;i++)
		cin>>arr[i].weight;
	sort(arr,arr+n,cmp);
	int cap;
	cin>>cap;
	cout<<knapsack(arr,n,cap);
	return 0;
}