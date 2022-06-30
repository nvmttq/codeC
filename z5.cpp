#include<bits/stdc++.h>
using namespace std;

int n;
int stt = 1;
struct SACH{
	string id,name;
	int y,sl;
	int mn;
};
vector <SACH> book;
SACH nhap1q(){
	SACH a;
	cin >> a.id;
	cin.ignore();
	getline(cin,a.name);
	cin >> a.y;
	cin >> a.sl;
	cin >> a.mn;
	return a;
}
void nhap(int n){
	for(int i = 0; i < n; i++){
		SACH a = nhap1q();
		book.push_back(a);
	}
}
void xuat1q(SACH a){
	cout << stt++ << "|" << a.id << "|" << a.name << "|" << a.y << "|" << a.sl << "|" << a.mn << endl;
}
void xuat(int n){
	for(int i = 0; i < n; i++){
		cout << stt++ << "|" << book[i].id << "|" << book[i].name << "|" << book[i].y << "|" << book[i].sl << "|" << book[i].mn << endl;
	}
}
int solve(int n){
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		sum += book[i].sl;
	}
	return sum;
}
int main(){
	cin >> n;
	nhap(n);
	xuat(n);
	cout << solve(n);
	return 0;
}




