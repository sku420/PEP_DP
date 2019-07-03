#include "bits/stdc++.h"
using namespace std;


int main()
{
    int limit;
    cin>>limit;

    queue<int>q;
    cout<<'0'<<" ";
    for(int i=1;i<=9;i++)
        q.push(i);
    while(!q.empty())
    {
        int n=q.front();
        q.pop();
        if(n<limit)
        {
            cout<<n<<" ";
            for(int i=0;i<=9;i++)
                q.push(10*n+i);
        }
    }
    cout<<limit<<endl;
}

