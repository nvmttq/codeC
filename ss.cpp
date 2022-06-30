#include<bits/stdc++.h>
using namespace std;


int sum_el(int id, int n, vector <int> a){
	if(id == n) return 0;
	return a[id] + sum_el(id+1,n,a);
}

int main() {
	ifstream fin;
	fin.open("SoNguyen.txt", ios::in);
	ofstream fout;
	fout.open("SoLe.out",ios::out);
	
	vector <int> a;
	int n;
	fin >> n;
	a.resize(n);
	int i = 0;
	if(fin.fail()){
		cout << "FILE khong ton tai !";
	}
	else{
		while(!fin.eof()){
			int t;
			fin >> t;
			a[i++] = t;
		}
		for(int j = 0; j < n; j++){
			if(a[j] % 2 != 0){
				fout << a[j] << " ";
			}
		}
		cout << "SUM = " << sum_el(0,n,a) << endl;
		bool check_sort_all = true;
		for(int j = 0; j < n; j++){
			if(a[j] > a[j+1]){
				check_sort_all = false;
				break;
			}
		}
		if(check_sort_all) cout << "Cac phan tu trong vector da duoc sap xep tang dan !" << endl;
		else cout << "Cac phan tu trong vector chua duoc sap xep tang dan !" << endl;
		for(int j = 0; j < n; j++){
			for(int k = j+1; k < n; k++){
				if(a[j] == a[k]){
					reverse(a.begin() + k, a.end());
					a.pop_back();
					reverse(a.begin() + k, a.end());
				}
			}
		}
		
	}
	
	
	return 0;
}




