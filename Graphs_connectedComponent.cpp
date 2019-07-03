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

void dfs(list<int>*adj,int u,int n,vector<bool>&visited)
{
	stack<int>s;
	s.push(u);
	while(!s.empty())
	{
		u=s.top();
		s.pop();
		if(!visited[u])
		{
			cout<<u<<" ";
			visited[u]=1;
		}
		for(auto it=adj[u].begin();it!=adj[u].end();it++)
			if(!visited[*it])
				s.push(*it);
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
	system("cls");
	printGraph(adj,n);
	vector<bool>visited(n,0);
	int count=0;
	cout<<endl<<"DFS:-> ";
	for(int i=0;i<n;i++)
		if(!visited[i])
		{
			dfs(adj,i,n,visited);
			count++;
		}
	cout<<endl<<"#Connected: "<<count;
	return 0;
}

/*
8 7
0 1
1 2
2 3
3 4
4 5
1 4
6 7
 */