	
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
	
	int cmp(int a,int b){
	    return a>b;
	}
	int isgood(int m, int n){
		return m == n;
	}
	void solve(){
		int n; cin >> n;
		int x = n;
		n += 1;
		if(n % 6 == 0 || n%8 == 0 || n%10==0){
			if(n%6 == 0) cout << 15*(n/6);
			else if(n%8 == 0) cout << 20*(n/8);
			else cout << 25*(n/10);
			return;
		}

	}
	signed main(){
		fast_int_out
		
		
		tc{
			solve();
			cout << nl;
		}
		
		
		return 0;
	}
	 
