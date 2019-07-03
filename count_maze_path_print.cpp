#include <iostream>
using namespace std;

int count=0;
void pathCount(int m, int n, int i, int j, string path)
{
	if(i==m and j==n) 
	{
		cout<<path<<" ";
		count++;
		return;
	} 
	
	if(i>m or j>n)
		return;

	pathCount(m,n,i+1,j,path+"V");
	pathCount(m,n,i,j+1,path+"H");
}

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	pathCount(m,n,1,1,"");
	cout<<"\n"<<count;
	return 0;
}