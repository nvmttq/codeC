#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define all(vr) vr.begin(), vr.end()
#define rall(vr) vr.rbegin(), vr.rend()
#define rep(i,a,n) 								for(int i = a; i < n; i++)
#define REP(i,a,n) 								for(int i = a; i <= n; i++)
#define rrep(i,a,n) 								for(int i = n-1; i >= a; i--)
#define RREP(i,a,n) 								for(int i = n; i >= 1; i--)
#define ll long long
#define ld long double
#define tc long long t;cin>>t;while(t--)
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define npos 18446744073709551615
#define fast_int_out ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
const char nl = '\n';
const int maxN = 3e5 + 7;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;


int sumdg(int n) {
	int s = 0;
	while(n > 0){
		s += n%10; n/=10;
	}
	return s;
}
signed main(){
	fast_int_out
	
	vi d,a;
	
	int n; cin >> n;
	vi v(n);
	rep(i,0,n){
		cin >> v[i];
		if(v[i] >= 0) d.pb(v[i]);
		else a.pb(v[i]);
	}
	vi duong,am;
	set <int> res;
	if(d.size() > 0){
		duong.pb(d[0]);
		for(int i = 1; i < d.size(); i++){
			if(d[i] <= duong[0]) duong.insert(duong.begin(),d[i]);
			else if(d[i] >= duong[duong.size()-1]) duong.pb(d[i]);
		}
		for(auto y : duong) res.insert(y);
	}
	if(a.size() > 0){
		am.pb(a[0]);
		for(int i = 1; i < a.size(); i++){
			if(a[i] <= am[0]) am.insert(am.begin(),a[i]);
			else if(a[i] >= am[am.size()-1]) am.pb(a[i]);
		}
		for(auto x : am) res.insert(x);
	}
	
	for(auto z : res) cout << z << " ";
	cout << endl << res.size();
	return 0;
}




