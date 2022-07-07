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
#define fast_int_out ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
const char nl = '\n';
const int maxN = 3e5 + 7;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;


void solve(){
	int n,k; cin >> n >> k;
	
	int mx_ltK = -INF;
	int mx_gtK = -INF;
	int num_t_gtK = 0;
	while(n--){
		int f,t; cin >> f >> t;
		if(t > k){
			mx_gtK = max(f - (t - k),mx_gtK);
		}
		else{
			mx_ltK = max(f,mx_ltK);
		}
	}
	cout << max(mx_gtK,mx_ltK);
}
signed main(){
	fast_int_out
//	tc{solve(); cout << nl;}
	solve();
	return 0;
}




