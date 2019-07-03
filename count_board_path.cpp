#include <bits/stdc++.h>
using namespace std;

int countStairPath(int n, int current, int k, string osf) {
	// Base case
	if(current > n) {
		cout<<osf<<" ";
		return 0;
	}
	if(current == n) {
		return 1;
	}
	// Recursion
	int result = 0;
	for(int i=1;i<=k;i++) {
		result += countStairPath(n, current+i, k, osf+to_string(i));
	}
	return result;
}

int main(int argc, char const *argv[])
{
	cout<<countStairPath(3, 0, 3, "");
	return 0;
}