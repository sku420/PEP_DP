#include <bits/stdc++.h>
using namespace std;

struct edge
{
	int src,dest,wt;
};

struct Set
{
	int parent, rank;
};

bool cmp(edge a, edge b){
	return a.wt<b.wt;
}

int find(vector<Set>&s,int i)
{
	if(s[i].parent!=i)
		s[i].parent=find(s,s[i].parent);
	return s[i].parent;
}

void _union(vector<Set>&s,int u,int v)
{
	int u_root=find(s,u);
	int v_root=find(s,v);
	if(s[v_root].rank<=s[u_root].rank)
	{
		s[v_root].parent=u_root;
		s[u_root].rank++;
	}
	else
	{
		s[u_root].parent=v_root;
		s[v_root].rank++;
	}

}
void kruskals(vector<edge>&adj,int n,int m)
{
	vector<Set>s(n);
	vector<edge>mst;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		s[i].parent=i;
		s[i].rank=-1;
	}
	for(int i=0;i<m;i++) //cycle
	{
		edge curr=adj[i];
		int srcParent=find(s,curr.src);
		int destParent=find(s,curr.dest);
		if(srcParent!=destParent)
		{
			_union(s,srcParent,destParent);
			//mst.push_back(curr);
			ans+=curr.wt;
		}
	}

	cout<<ans;

}
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	vector<edge>adj(m);
	for(int i=0;i<m;i++)
		cin>>adj[i].src>>adj[i].dest>>adj[i].wt;
	sort(adj.begin(),adj.end(),cmp);
	for(auto x:adj)
		cout<<x.src<<" "<<x.dest<<" "<<x.wt<<endl;
	kruskals(adj,n,m);
	return 0;
}

/*
7 8
0 1 2
0 2 4
1 3 1
2 3 3
2 4 5
4 5 2
4 6 1
5 6 4
 */
/*
5 7
1 2 20
1 3 50
1 4 70
1 5 90
2 3 30
3 4 40
4 5 60

->150
 */