#include<bits/stdc++.h>
using namespace std;
#define int long long
bool checkstr(string x, int id){
	if(id == (int)x.size()-1) return true;
	if(x[id] >= x[id+1]) return false;
	return checkstr(x,id+1);
	return true;
}
string chuso(string res, int n, int num){
	//string tmp = to_string(num);
	if((int)res.size() == n) return res;

		if((int)res.size() == n) return res;
		res = '0' + res;
		return chuso(res,n,num);
}
void solve(int n, int limit, string res, int num){
	if(num >= limit) return;
	res = to_string(num);
	res = chuso(res,n,num);
	
	if(checkstr(res,0)) cout << res << " ";
	solve(n,limit,res,num+1);
}
signed main(){
	int n; cin >> n;
	string res = "";
	int num = 0;
	int limit = pow(10,n);
//	cout << chuso(res,n,123);
	solve(n,limit,res,num);
	
//	cout << limit; return 0;
//	while(num < limit){
//		string tmp = chuso(res,n,num);
//		if(checkstr(tmp,0)) cout << tmp << " ";
//		num++;
//	}
//	while((int)res.size() < n+1){
//		string tstr ="0";
//		string kt = to_string(num);
//		while(kt.size() < n){
//			tstr = tstr + to_string(num);
//			kt = tstr;
//		}
//		if(checkstr(kt,0))cout << kt << " ";
//		res = kt; num++;
//	}
	return 0;
}




