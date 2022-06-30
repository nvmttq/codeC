#include <bits/stdc++.h>
using namespace std;
#define int long long
int maxduong(int mx, int n, vector <int> a){
	if(n == 0) return mx;
	if(a[n-1] > 0){
		mx = max(mx,a[n-1]);
	}
	return maxduong(mx,n-1,a);
}
signed main(){
	int n;
	cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << maxduong(-1,n,a);
	return 0;
}




