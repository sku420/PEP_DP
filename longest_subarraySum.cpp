int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		for(int i=1;i<n;i++)
			v[i]+=v[i-1];
		for(int i=0;i<n;i++)

	}
	return 0;
}