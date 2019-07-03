#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
        cin>>i;
    //sort(v.begin(), v.end());
    bool flag=0;
    for(int i=0;i<=n-4;i++)
    {
    	flag=1;
    	if((v[i]^v[i+1]^v[i+2]^v[i+3])==0)
    	{
    		flag=0;
    		cout<<"Yes"<<endl;
    		break;
    	}
    }
    if(flag)
    	cout<<"No"<<endl;
	return 0;
}