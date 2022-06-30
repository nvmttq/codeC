#include<bits/stdc++.h>
using namespace std;

int solve(int n){
	if(n == 1) return 1;
	if(n % 2 == 0) return solve(n/2)+1;
	return solve(n*3+1) + 1;
}
int main(){
	int n; cin >> n;

	cout << solve(n);
//	while(n != 1){
//		if(n % 2 == 0) n/= 2;
//		else{
//			cnt++;
//			n *= 3; n++;
//		}
//		if(n != 1)cnt++;
//	}
//	cout << cnt;
	return 0;
}




