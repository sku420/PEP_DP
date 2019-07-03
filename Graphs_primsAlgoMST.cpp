#include <bits/stdc++.h>
using namespace std;

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
void printPath(vector<int>&weight,vector<int>&parent,int n)
{
	cout<<"parent\t"<<"vertex\t"<<"weight"<<endl;
	for(int i=0;i<n;i++)
		cout<<parent[i]<<"\t"<<i<<"\t"<<weight[i]<<endl;
}

void prims(list<pair<int, int> >*adj,int u,int n)
{
	vector<bool>visited(n,0);
	vector<int>weight(n,INT_MAX);
	vector<int>parent(n,-1);
	weight[u]=0;
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;
	q.push({0,u});
	while(!q.empty())
	{
	    int u= q.top().second;
	    q.pop();
	    visited[u]=1;
	    for(auto it=adj[u].begin();it!=adj[u].end();it++)
            if (!visited[(*it).first] and (*it).second<weight[(*it).first])
            {
                weight[(*it).first]=(*it).second;
                q.push({weight[(*it).first],(*it).first});
                parent[(*it).first]=u;
            }
	}
	cout<<accumulate(weight.begin(),weight.end(),0)<<endl;
	printPath(weight,parent,n);

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
	prims(adj,0,n);
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