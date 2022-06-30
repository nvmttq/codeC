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
void swap(ll *p1, ll *p2)
{
   ll temp=*p1;
   *p1=*p2;
   *p2=temp;
}
signed main(){
	fast_int_out
	
	int t; cin >> t;
	while(t--){
		int a,b; cin >> a >> b;
		int x,y; cin >> x >> y;
		int ans = 0;
		while(a > 0 && b > 0){
			int z = 0, zz = 0;
			if(a - x >= 0 && b - y >= 0){
				int res = min(a/x,b/y);
				int res1 = min(a/y,b/x);
				res = max(res,res1);
				z = res;
				a -= x*z;
				b -= y*z;
			}
			else if(a - y >= 0 && b - x >= 0){
				int res2 = min(a/x,b/y);
				int res3 = min(a/y,b/x);
				res2 = max(res2,res3);
				zz = res2;
				a -= x*zz;
				b -= y*zz;
			}
			else break;
			ans = z + zz;
		}
		cout << ans << nl;
	}
	return 0;
}




