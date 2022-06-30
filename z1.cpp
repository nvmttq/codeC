#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
	
}

signed main(){
	int n; cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 1;
	int res = 0;
	for(int i = 0; i < n - 1; i++){
		if(a[i] <= a[i+1]){
			cnt++;
			res = max(cnt,res);
		}
		else cnt = 1;
	}
	cout << res;

	return 0;
}




