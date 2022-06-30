#include <bits/stdc++.h>
using namespace std;
#define int long long
int maxam(int mx, int n, vector <int> a){
	if(n == 0) return mx;
	if(a[n-1] < 0){
		mx = max(mx,a[n-1]);
	}
	return maxam(mx,n-1,a);
}
signed main(){
	int n;
	cin >> n;
	vector <int> a(n);
	int num = -1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] < 0) num = a[i];
	}
	cout << maxam(num,n,a);
	return 0;
}




