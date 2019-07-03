#include "bits/stdc++.h"
using namespace std;

void itos(string s,string i2s,vector<char>&dict)
{
    if(!s.size())
    {
        cout<<i2s<<" ";
        return;
    }
    int one=s[0]-48, two;
    if(s.size()>=2)
    {
        two=((s[0]-48)*10) + (s[1]-48);
        itos(s.substr(1),i2s+dict[one],dict);
        if(two<27)
            itos(s.substr(2),i2s+dict[two],dict);
    }
    else
        itos(s.substr(1),i2s+dict[one],dict);
}

int main()
{
    vector<char>dict(27);
    char ch='a';
    for(int i=1;i<=26;i++)
    {
        dict[i]=ch;
        ch++;
    }
    string s;
    cin>>s;
    itos(s,"",dict);


}
