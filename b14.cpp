#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int a, int b){
	if(a > b) return;
	else{
		cout << a << " ";
		solve(a*2,b);
	}
}
signed main(){
	int a,b; cin >> a >> b;
	solve(a,b);
//	for(int i = a; i <= b; i*=2){
//		cout << i << " ";
//	}
	return 0;
}




