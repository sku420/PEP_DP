#include <bits/stdc++.h>
using namespace std;

void edge(list<int> *adj,int u,int v)
{
	adj[u].push_back(v);
	//adj[v].push_back(u);
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
void dfsHelper(list<int>*adj,int u,list<int>&ans,vector<bool>&visited)
{
	visited[u]=1;
	for(auto it=adj[u].begin();it!=adj[u].end();it++)
		if(!visited[*it])
			dfsHelper(adj,*it,ans,visited);
	ans.push_front(u);

}
void dfs(list<int>*adj,int u,int n,list<int>&ans)
{
	vector<bool>visited(n,0);
	for(int i=0;i<n;i++)
		if(!visited[i])
			dfsHelper(adj,u,ans,visited);
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
		cin>>u;
		cin>>v;
		edge(adj,u,v);
	}
	system("cls");
	printGraph(adj,n);
	list<int>ans;
	cout<<endl<<"Topological Order :-> ";
	dfs(adj,0,n,ans);
	for(auto x:ans)
		cout<<x<<" ";
	return 0;
}
/*
5 5
0 1
0 2
1 3
2 3
3 4
 */