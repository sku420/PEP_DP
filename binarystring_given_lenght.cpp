#include <bits/stdc++.h>
using namespace std;

void countbinary(int n,string s,int &count)
{
    if(s.size()==n)
    {
        cout<<s<<" ";
        count++;
        return;
    }
    countbinary(n,s+'0',count);
    if(s[s.size()-1]!='1')
        countbinary(n,s+'1',count);
}

int main()
{
    int n,count=0;
    cin>>n;
    if(n)
        countbinary(n,"",count);
    cout<<endl<<count;
}
