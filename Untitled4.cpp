#include<bits/stdc++.h>
using namespace std;
#define int long long
void c(int n){
	if(n == 0) return;
	
	c(n/10);
	cout << n%10;
}
signed main(){
	int n; cin >> n;
	c(n);
	return 0;
}




