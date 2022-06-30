#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	if(n == 1){
		cout << n;
		return;
	}
	if(n % 2 == 0){
		cout << n << " ";
		solve(n/2);
	}
	else{
		cout << n << " ";
		solve(3*n+1);
	}
}
int main(){
	int n; cin >> n;
	solve(n);
	return 0;
}




