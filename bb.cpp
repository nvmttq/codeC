#include<bits/stdc++.h>
using namespace std;

struct NGAY{
	int d,m,y;
};
//struct sv{
//	string name;
//	NGAY ngaysinh;
//	
//};
//int n;
//vector <sv> ds;
//NGAY nhapngay(){
//	NGAY z;
//	cin >> z.d >> z.m >> z.y;
//	return z;
//}
//sv nhap1sv(){
//	sv z;
//	cin >> z.name;
//	z.ngaysinh = nhapngay();
//	return z;
//}
//void nhap(){
//	for(int i = 0; i < n; i++){
//		sv z = nhap1sv();
//		ds.push_back(z);
//	}
//}
//void xuatns(sv z){
//	cout << "Ngay sinh: " << z.ngaysinh.d << "/" << z.ngaysinh.m << "/" << z.ngaysinh.y << endl;
//	
//}
//void xuat1sv(sv z){
//	cout << "HO ten" << z.name << endl;
//	xuatns(z);
//}
//void xuat(){
//	for(int i = 0; i < n; i++){
//		xuat1sv(ds[i]);
//	}
//}
int main(){
	FILE *f;
	f = fopen("test.bin","rb");
	NGAY n1;
	
	
	fread(&n1,sizeof(struct NGAY),1,f);
	
	fclose(f);

	return 0;
}




