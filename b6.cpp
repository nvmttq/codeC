#include<bits/stdc++.h>
using namespace std;
#define int long long
int f = 0;
int t(int n){
	if(n == 0){
		return 0;
	}
	
	if((n%10)%2 == 1){
		if(n/10 == 0) return n%10;
		return n%10*t(n/10);
	}
	return t(n/10);
}
signed main(){
	int n; cin >> n;
	if(n >= 0)
	cout << t(n);

	return 0;
}




