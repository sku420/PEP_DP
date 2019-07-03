#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll painterCount(vector<ll>&l,int n,int mid)
{
    ll count=1,sumCheck=0;
    for(int i=0;i<n;i++)
    {
         if(sumCheck+l[i]>mid)
         {
            sumCheck=l[i];
            count++;
         }
         else
          sumCheck=sumCheck+l[i];
     }
     return count;
 }


int main(int argc, char const *argv[])
{
	int n;
	ll k,t;
	cin>>n>>k>>t;

	vector<ll>l(n);
	for(int i=0;i<n;i++)
		cin>>l[i];
	ll low= *max_element(l.begin(),l.end());
	ll high=accumulate(l.begin(), l.end(),0);
	
	while(low<high)
    {
        ll mid=(high+low)/2;
        if(painterCount(l,n,mid)<=k)
            high=mid;
        else
            low=mid+1;
    }
    cout<<(high*t)%10000003;

	return 0;
}