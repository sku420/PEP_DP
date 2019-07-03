#include <bits/stdc++.h>
using namespace std;
#define inf 1e9
void edge(list<pair<int, int> >*adj,int u,int v,int w)
{
	adj[u].push_back({v,w});
	//adj[v].push_back({u,w});
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

void bfs(int **resedualCapacity,int u,int n,int sink)
{
	vector<bool>visited(n,0);
	vector<int>parent(n,-1);
	visited[u]=1;
	queue<int>q;
	q.push(src);
	bool fountAugmentedPath=false;
	while(!q.empty())
	{
	    int u=q.front();
	    q.pop();
	    for(int v=0;v<n;v++){
	    	if(!visited[v] and resedualCapacity[u][v]>0){
	    		parent[v]=u;
	    		visited[v]=true;
	    		que.push(v);
	    		if(v==sink){
	    			fountAugmentedPath=true;
	    			break;
	    		}
	    	}
	    }
	    return fountAugmentedPath;
	}
}

int networkFlow(int **capacity,){

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
	networkFlow(adj,0,n);
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