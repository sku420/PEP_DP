#include <bits/stdc++.h>
using namespace std;

void edge(list<int> *adj,int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void printGraph(list<int> *adj,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<i<<":->";
		for(auto it=adj[i].begin();it!=adj[i].end();it++)
			cout<<*it<<"->";
		cout<<"END"<<endl;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	list<int> *adj=new list<int>[n];
	int e;
	cin>>e;
	for(int i=0;i<e;i++)
	{
		int u,v;
		cout<<"source: ";
		cin>>u;
		cout<<"destination: ";
		cin>>v;
		edge(adj,u,v);
	}
	printGraph(adj,n);
	return 0;
}