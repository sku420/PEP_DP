#include<bits/stdc++.h>
using namespace std;

bool isItSafe(vector<string>&maze,int i, int j, int n, int m) {
  return i>=0 and j>=0 and i<m and j<n and maze[i][j]=='O';
}
void paths(vector<string>&maze, int m, int n,int i,int j,vector<vector<int> >&ans)
{
  if(ans[m-1][n-1] == 1)
      return;
  if(i==m-1 and j==n-1)
  {
    ans[i][j]=1;
    return;
  }
  if(!isItSafe(maze,i, j, n,m))
  {
      maze[i][j]=0;
      return;
  }

  if(isItSafe(maze,i, j+1, n,m) and !ans[i][j+1])
  {
      ans[i][j]=1;
      paths(maze,m,n, i, j+1,ans);
  }

  if(isItSafe(maze,i+1, j, n,m) and !ans[i+1][j])
  {
      ans[i][j]=1;
      paths(maze, m, n, i+1, j,ans);
  }
}

int main()
{
    int n,m;
    cin>>m>>n;
    //vector<vector<char> >maze(m,vector<char>(n));
    vector<vector<int> >ans(m,vector<int>(n,0));
    vector<string>maze;
    for(int i=0;i<m;i++)
    {
      string s;
      cin>>s;
      maze.push_back(s);
    }
    
    paths(maze,m,n,0,0,ans);
    if(!ans[m-1][n-1])
        cout<<"-1";
    else
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++)
        cout<<ans[i][j]<<" ";
      cout<<"\n";
    }
}
