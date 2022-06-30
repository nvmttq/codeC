#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(vector <int> a, int n){
	if(n == 1) return 0;

	int s = f(a,n-1);
	cout << n << endl;
	if(a[n-1] > 0){
		s += a[n-1];
	}
	return s;
}
signed main(){
	ifstream fi;
	fi.open("C:/PJ1/INPUT.txt", ios::in);
	if(fi.fail()) cout << 0;
	return 0;
}



