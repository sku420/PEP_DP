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

void bfs(list<int>*adj,int u,int n)
{
	vector<bool>visited(n,0);
	vector<int>dist(n,0);
	queue<int>q;
	q.push(u);
	dist[u]=0;
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		if(!visited[u])
		{
			cout<<u<<" ";
			visited[u]=1;
		}
		for(auto it=adj[u].begin();it!=adj[u].end();it++)
			if(!visited[*it])
			{
				q.push(*it);
				if(!dist[*it])
					dist[*it]=dist[u]+1;
			}
	}
	cout<<endl<<"SSSP:->";
	for(auto x:dist)
		cout<<x<<" ";
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
	system("cls");
	printGraph(adj,n);
	cout<<endl<<"BFS:->";
	bfs(adj,0,n);
	return 0;
}

/*
7 8
0 1
0 2
1 3
1 4
2 3
4 5
4 6
5 6
 */