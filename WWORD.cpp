#include <bits/stdc++.h>
using namespace std;
double pwer(double num, double cnt);
double fac(double num);
double solve(double pw,double gt, long long n, long long x, long long cnt){
	if(cnt > n) return 0;
	if(cnt % 2 == 0) return (pwer(x,cnt)/fac(cnt)) + solve(pw*x,gt*(cnt+1),n,x,cnt+1);
	else return -(pwer(x,cnt)/fac(cnt)) + solve(pw*x,gt*(cnt+1),n,x,cnt+1);
}


double fac(double num){
	if(num == 0 || num == 1) return 1;
	return num*fac(num-1);
}

double pwer(double num, double cnt){
	if(cnt == 0) return 1;
	return num*pwer(num,cnt-1);
}
int main() {
	int n,x;
	cin >> n >> x;
	cout << solve(x,1,n,x,1);
	
	
	return 0;
}
