#include<bits/stdc++.h>
using namespace std;

int solve(int k, int n){
	if(k > n) return 0;
	if(k == n) return 1;
	return solve(k*2,n)+1;
}
int main(){
	int n; cin >> n;
	int k = 2;
	cout << solve(k,n);
	return 0;
}




