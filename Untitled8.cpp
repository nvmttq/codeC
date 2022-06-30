#include <bits/stdc++.h>
using namespace std;
int re(int i, int j, int n, int m){
	if(i > n || j > m) return 0;
	if(i == n && j == m){
		return re(i+1,j+1,n,m)+1;
	}
	if(i == n){
		return re(i,j+1,n,m);
	}
	return re(i+1,j,n,m);
}
int solve(int i, int j, int n, int m){
	if(i == n && j == m) return 0;
	if(i == n) return solve(i,j+1,n,m);
	return solve(i+1,j,n,m) + re(i,j,n,m);
}
int main()
{
	int n,m; cin >> n >> m;
	cout << solve(1,1,n,m);
	return 0;
}

