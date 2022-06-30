#include<bits/stdc++.h>
using namespace std;

int solve(string s){
	if((int)s.size() == 0 || (int)s.size() == 1) return 1;
	if(s[0] == s[(int)s.size() - 1]){
		return solve(s.substr(1,(int)s.size()-2));
	}
	return 0;
}
int main(){
	string s; cin >> s;
	cout << solve(s);
	return 0;
}




