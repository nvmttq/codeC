#include<bits/stdc++.h>
using namespace std;
#define int long long
int gt(int k);
int solve(int k,int n){
	if(k == n) return 1;
	return solve(k+1,n);
	return gt(k);
}
int gt(int k){
	if(k == 0 || k == 1) return 1;
	return k*gt(k-1);
}
signed main(){
	int n; cin >> n;
	int t = n;
	while(t--){
		cout << solve(1,n)<<endl;
	}
	if(n>= 0)cout << solve(1,n);
	int s = 0;
	for(int i = 1; i <= n; i++){
		int s1 = 1;
		for(int j = 1; j <= i; j++){
			s1 *= j;
		}
		s += s1;
	}
	cout << s;
	return 0;
}




