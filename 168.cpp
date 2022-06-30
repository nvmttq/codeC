#include <bits/stdc++.h>
using namespace std;
#define int long long
int k5(int n){
	if(n == 0) return 1;
	return 5*k5(n-1);
}
int kt(int n, int end){
	int c = k5(n);
	if(c == end) return 1;
	if(c > end) return 0;
	return kt(n+1,end);
}
int max5k(int mx, int n, vector <int> a){
	if(n == 0) return mx;
	if(kt(0,a[n-1])){
		mx = max(mx,a[n-1]);
	}
	return max5k(mx,n-1,a);
}
signed main(){
	int n;
	cin >> n;
	vector <int> a(n);
	int num = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << max5k(num,n,a);
	return 0;
}




