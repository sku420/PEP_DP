#include <bits/stdc++.h>
using namespace std;
map<int,map<int,bool> >visited;
void fluidfill(vector<string>&grid,int n,int m,int i,int j)
{
	if(grid[i][j]=='#')
		return;
	if(visited[i][j])
		return;
	grid[i][j]='0';
	visited[i][j]=true;
	for(auto x: grid)
		cout<<x<<endl;
	system("cls");
	fluidfill(grid,n,m,i-1,j);
	fluidfill(grid,n,m,i,j-1);
	fluidfill(grid,n,m,i+1,j);
	fluidfill(grid,n,m,i,j+1);
	
}

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	vector<string>grid(n);
	for(auto &x:grid)
		cin>>x;
	fluidfill(grid,n,m,8,15);
	for(auto x:grid)
		cout<<x<<endl;
	return 0;
}

/*
15 30
..............................
.............#####............
.............#...#............
.....#########...#######......
....###.....######.....###....
...##....................##...
..##......................#...
..##.....................##...
..###...................##....
....###................###....
......###............###......
........###........###........
..........##########..........
..............................
...........A.P.P.L.E..........
 */