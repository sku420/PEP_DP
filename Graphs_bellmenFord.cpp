#include <bits/stdc++.h>
using namespace std;
#define inf 1e9
void edge(list<pair<int, int> >*adj,int u,int v,int w)
{
	adj[u].push_back({v,w});
	adj[v].push_back({u,w});
}
void printGraph(list<pair<int, int> >*adj,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<i<<":->";
		for(auto it=adj[i].begin();it!=adj[i].end();it++)
			cout<<it->first<<"("<<it->second<<")"<<"->";
		cout<<"END"<<endl;
	}
}

void bellmenFord(list<pair<int, int> >*adj,int u,int n,int e)
{
	vector<int>dist(n,inf);
	dist[0]=0;
	for(int i=0;i<n;i++)
	{
		for(auto x:adj[i])
		{
			if(dist[x.first]!=inf and dist[i]>dist[x.first]+x.second)
				dist[i]=dist[x.first]+x.second;
		}
	}

	for(int i=0;i<n;i++)
	{
		for(auto x:adj[i])
		{
			if(dist[x.first]!=inf and dist[i]>dist[x.first]+x.second)
			{
				cout<<"Graph has Negative Edge"<<endl;
				break;
			}

		}
	}
	for(int i=0;i<n;i++)
		cout<<i<<" -> "<<dist[i]<<endl;

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	list<pair<int, int> >*adj=new list<pair<int,int> >[n];
	int e;
	cin>>e;
	for(int i=0;i<e;i++)
	{
		int u,v,w;
		cin>>u;
		cin>>v;
		cin>>w;
		edge(adj,u,v,w);
	}
	system("cls");
	printGraph(adj,n);
	bellmenFord(adj,0,n,e);
	return 0;
}

/*
7 8
0 1 2
0 2 4
1 3 1
2 3 3
2 4 1
4 5 2
4 6 4
5 6 6
 */