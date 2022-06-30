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
void solve(){

}
int cmp(int a,int b){
    return a>b;
}
void sortJ(int l, int r, int n, vector <int> &a){
	if(r == n) return;
	if(a[l] > a[r]){
		swap(a[l],a[r]);
	}
	sortJ(l,r+1,n,a);
}
void sortA(int l, int r, int n, vector <int> &a){
	if(l == n) return;
	sortJ(l,r,n,a);
	sortA(l+1,r+1,n,a);
}
signed main(){
	fast_int_out
	int n; cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sortA(0,1,n,a);
	for(auto x : a) cout << x << " ";
	return 0;
}




