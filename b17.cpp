#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve(int n){
	if(n == 0) return;
	cout << n%10;
	solve(n/10);
}
signed main(){
	int n; cin >> n;
	if(n > 0) solve(n);
	else if(n < 0){
		cout << "-";solve(abs(n));
	}
	else cout << 0;
	return 0;
}




