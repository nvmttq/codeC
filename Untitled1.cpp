#include<bits/stdc++.h>
using namespace std;
int n,m;

#define ROW 101
#define COL 101
int a[ROW][COL];
void nhap(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
}
void xuat(){
	for(int i = 0; i <= n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j];
		}
		cout << endl;
	}
}

int max_row(int star, int mx){
	for(int i = 0; i < m; i++){
		mx = max(mx,a[star][i]);
	}
	return mx;
}
int tong_Max(){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += max_row(i,a[i][0]);
	}
	return sum;
}


void chen_dong(int k){
	//cin >> k;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == k){
				for(int x = 0; x < n; x++){
					for(int y = 0; y < m; y++){
						a[n-x][y] = a[n-x-1][y];
					}
				}
				return;
			}
		}
	}
}
void chen_gia_tri_dong_k(int k){
	
	for(int i = 0; i < m; i++){
		//int value; cin >> value;
		int value = 1;
		a[k][i] = value;
	}
}
int main(){
	cin >> n >> m;
	nhap();
	chen_dong(2);
	chen_gia_tri_dong_k(2);
	xuat();
	return 0;
}




