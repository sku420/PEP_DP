#include "bits/stdc++.h"
using namespace std;

void display(vector<vector<int> >grid,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<grid[i][j]<<"\t";
        cout<<"\n";
    }
}

bool isItSafe(vector<vector<int> >&grid, int r,int c,int m, int n)
{
    return r>=0 and c>=0 and r<m and c<m and grid[r][c]==-1;
}

bool knightsTour(vector<vector<int> >grid,int x,int y,int m,int n, int count)
{
    if(count==m*n-1)
    {
        grid[x][y]=count;
        display(grid,m,n);
        return true;
    }

    if(isItSafe(grid, x+1, y+2, m, n))
    {
		grid[x][y] = count;
		if(knightsTour(grid, x+1, y+2, m, n, count+1))
			return true;
        else
            grid[x][y]=-1;
    }

	if(isItSafe(grid, x-1, y+2, m, n))
    {
		grid[x][y]=count;
		if(knightsTour(grid, x-1, y+2, m, n, count+1))
			return true;
		else
			grid[x][y]=-1;
	}

	if(isItSafe(grid, x+2, y-1, m, n))
    {
		grid[x][y] = count;
		if(knightsTour(grid, x+2, y-1, m, n, count+1))
			return true;
		else
			grid[x][y]=-1;
	}

	if(isItSafe(grid, x+2, y+1, m, n))
    {
		grid[x][y] = count;
		if(knightsTour(grid, x+2, y+1, m, n, count+1))
			return true;
		else
			grid[x][y]=-1;
	}

	if(isItSafe(grid, x+1, y-2, m, n)) {
		// Work
		grid[x][y] = count;
		if(knightsTour(grid, x+1, y-2, m, n, count+1)) {
			return true;
		} else {
			grid[x][y]=-1;
		}
	}

	if(isItSafe(grid, x-1, y-2, m, n)) {
		// Work
		grid[x][y] = count;
		if(knightsTour(grid, x-1, y-2, m, n, count+1)) {
			return true;
		} else {
			grid[x][y]=-1;
		}
	}

	if(isItSafe(grid, x-2, y-1, m, n)) {
		// Work
		grid[x][y] = count;
		if(knightsTour(grid, x-2, y-1, m, n, count+1)) {
			return true;
		} else {
			grid[x][y]=-1;
		}
	}

	if(isItSafe(grid, x-2, y+1, m, n)) {
		// Work
		grid[x][y] = count;
		if(knightsTour(grid, x-2, y+1, m, n, count+1)) {
			return true;
		} else {
			grid[x][y]=-1;
		}
	}
	return false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> >grid(n,vector<int>(m,-1));
    if(!knightsTour(grid,2,2,m,n,0))
        cout<<"No Solution";
}
