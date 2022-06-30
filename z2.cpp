#include<bits/stdc++.h>
using namespace std;

int minam(int mn, int **a, int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			int t = *(*(a+i) + j);
			if(t < 0){
				mn = min(mn,t);
			}
		}
	}
	return mn;
}
int matrandonvi(int **a, int n, int m){
	int cnt1 = 0, cnt0 = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			int t = *(*(a+i) + j);
			if(i == j && t == 1){
				cnt1++;
			}
			else if(t == 0) cnt0++;
		}
	}
	if (cnt1 + cnt0 == n*m) return 1;
	return 0;
}
int main(){
	
	int n,m; cin >> n >> m;
	int **a = new int* [n];
	for(int i  = 0; i < n; i++)
	{
		*(a+i) = new int [m];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> *(*(a+i) + j);
		}
	}
	cout << matrandonvi(a,n,m);
	return 0;
}




