#include<bits/stdc++.h>
using namespace std;
#define int long long
int tong(int F[], int x, int i){
	if(i < x) return 0;
	
	return F[i-1] + tong(F,x,i-1); 
}
void gan(int n, int m, int i, int x, int F[]){
	if(i == m){
		cout <<F[i]; return;
	}
	if(i < n) F[i] = 0;
	if(i == n) F[i] = 1;
	else{
		F[i] = tong(F,x,i);
	}
	gan(n,m,i+1,x+1,F);
}
signed main(){
	int n,m; cin >> n >> m;
	int F [101] = {};
	//gan(n,m,0,1,F);
	for(int i = 0; i < 101; i++){
		if(i < n) F[i] = 0;
		else if(i == n) F[i] = 1;
		else{
			for(int j = i-(n); j < i; j++){
				F[i] += F[j];
			}
		}
	}
	cout << F[m];
//	for(int i = 0; i < 101; i++){
//		cout << F[i] << " ";
//	}
	return 0;
}




