#include<bits/stdc++.h>
using namespace std;

int cnt1(int n){
	if(n == 0) return 0;
	if(n%10 == 1){
		return 1 + cnt1(n/10);
	}
	return cnt1(n/10);
}
int solve(int star, int n){
	if(star > n) return 0;
	return cnt1(star) + solve(star+1,n);
}

int main(){
	int n; cin >> n;
	cout << solve(1,n);
	return 0;
}




