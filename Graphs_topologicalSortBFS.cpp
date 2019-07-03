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

void bfs(list<int>*adj,int n,list<int>&ans,vector<int>&inDegree)
{
	vector<bool>visited(n,0);
	queue<int>q;
	for(int i=0;i<n;i++)
		if(inDegree[i]==0)
			q.push(i);

	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		if(!visited[u])
		{
			visited[u]=1;
			ans.push_back(u);
		}
		for(auto it=adj[u].begin();it!=adj[u].end();it++)
		{
			inDegree[*it]--;
			if(!visited[*it] and !inDegree[*it])
				q.push(*it);
		}
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
		cin>>u;
		cin>>v;
		edge(adj,u,v);
	}
	system("cls");
	printGraph(adj,n);
	list<int>ans;
	vector<int>inDegree(n,0);
	for(int i=0;i<n;i++)
		for(auto it=adj[i].begin();it!=adj[i].end();it++)
			inDegree[*it]+=1;
	// for(auto &x:inDegree)
	// 	cout<<x<<" ";
	cout<<endl<<"Topological Ordering:->";
	bfs(adj,n,ans,inDegree);
	for(auto &i:ans)
		cout<<i<<" ";
	return 0;
}

/*
5 5
0 1
1 3
2 0
2 3
3 4
 */