#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string mssv,ht,ten,ho;
	double dgk,dck;
};

sinhvien nhap1sv(){
	sinhvien a;
	cin >> a.mssv;
	cin.ignore();
	getline(cin,a.ht);
	cin >> a.dgk;
	cin >> a.dck;
	return a;
}
	int n;
	vector <sinhvien> sv;
void nhap(){
	for(int i = 0; i < n; i++){
		sinhvien a = nhap1sv();
		sv.push_back(a);
		string s = a.ht;
		sv[i].ten = s.substr(s.rfind(' ') + 1);
		sv[i].ho = s.substr(0,s.find(' '));
	}
}
void xuat1sv(sinhvien a){
	cout << "MSSV: " << a.mssv << endl;
	cout << "Ho ten: " << a.ht << endl;
	cout << "Diem giua ky: " << a.dgk << endl;
	cout << "Diem cuoi ky: " << a.dck << endl;
}
void xuat(){
	for(int i = 0; i < n; i++){
		xuat1sv(sv[i]);
	}
}
int dem_sv_hoclai(int cnt){
	for(int i = 0; i < n; i++){
		double t = sv[i].dgk + sv[i].dck;
		t /= 2.0;
		if(t < 5) cnt++;
	}
	return cnt;
}
bool check_tieu(string s){
	string t = "";
	for(int i = s.size() - 1; i >= 0; i--){
		if(s[i] != ' '){
			t += s[i];
			if(s[i-1] == ' ') break;
			
		}
		
	}
	for(int i = 0; i < t.size(); i++){
		if(t[i] >= 'A' && t[i] <='Z') t[i] -= ' ';
	}
	reverse(t.begin(), t.end());
	int check = t.find("tieu");
	if(check != -1) return true;
	return false;
}
int dem_sv_ho_Tieu(int cnt){
	for(int i = 0; i < n; i++){
		string s = sv[i].ht;
		if(check_tieu(s)) cnt++;
	}
	return cnt;
}


string chuan_hoa(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z') s[i] -= ' ';
	}
//	// xoa dau
//	for(int i = 0; i < s.size(); i++){
//		if(s[0] == ' ') s.erase(0,1);
//		else break;
//	}
//	//xoa cuoi
//	for(int i = s.size() - 1; i >= 0; i--){
//		int t = s.size() - 1;
//		if(s[i] == ' ') s.erase(t,1);
//		else break;
//	}
//	//xoa giua
//	for(int i = 0; i < s.size(); i++){
//		if(s[i] == ' ' && s[i+1] == ' '){
//			s.erase(i,1);
//			i--;
//		}
//	}
	for(int i = 1; i < s.size(); i++){
		if(s[i] != ' '){
			if(s[i-1] == ' ') continue;
			s[i] += ' ';
		}
	}
	return s;
}
void xuat_SV_chuanhoa(){
	for(int i = 0; i < n; i++){
		string s = sv[i].ht;
		sv[i].ht = chuan_hoa(s);
		xuat1sv(sv[i]);
	}
}
void sort_j(int l, int r){
	if(r == n) return;
	if(sv[l].ten > sv[r].ten){
		swap(sv[l],sv[r]);
	}
	else if(sv[l].ten == sv[r].ten){
		if(sv[l].ho > sv[r].ho){
			swap(sv[l],sv[r]);
		}
	}
	sort_j(l,r+1);
}
void sort_i(int l, int r){
	if(l == n) return;
	sort_j(l,r);
	sort_i(l+1,r+1);
}
int main() {
	cin >> n;
	nhap();
	xuat();
	cout << "So sinh vien < 5 : " << dem_sv_hoclai(0) << endl;
	cout << "So sinh vien ten Tieu: " << dem_sv_ho_Tieu(0) << endl;
	xuat_SV_chuanhoa();
	cout << endl;
	sort_i(0,1);
	xuat();
	
	
//	string s;
//	getline(cin,s);
//	string t = s.substr(0,s.find(' '));
//	cout << t << " " << t.size();
////	if(ten[i] > ten[j]) swap(ten[i],t[j]);
////	else if(ten[i] == ten[j]){
////		if(ho[i] > ho[j]) swap(ho[i],ho[j]);
////	}
	return 0;
}




