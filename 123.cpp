#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	char name[100];
	int y;
	float dtb;
};
int n;
vector <SinhVien> sv;
SinhVien nhap1sv(int &i){
		SinhVien sv;
//		printf("nhap sinh vien thu %d \n", i + 1);	
//		fflush(stdin);
//		printf("Nhap ho ten : ");
//		gets(sv.name);
//		printf("Nhap nam sinh : ");
//		scanf("%d",&sv.y);
//		printf("Nhap diem trung binh: ");
//		scanf("%f",&sv.dtb);
			
		fflush(stdin);
		gets(sv.name);
		scanf("%d",&sv.y);
		scanf("%f",&sv.dtb);
	return sv;
}
void Write(int &n){
	FILE *f;
	f = fopen("input.bin","wb");
	fwrite(&n,sizeof(n),1,f);
	for(int i = 1; i <= n; i++){
		SinhVien a = nhap1sv(i);
		sv.push_back(a);
		fwrite(&a,sizeof(a),1,f);
	}
}
void xuat1sv(SinhVien a, int &i){
	printf("%s\n",a.name);
	printf("%d\n",a.y);
	printf("%f\n",a.dtb);
}
void xuat1svlm(SinhVien a, int &i){
	printf("==============Thong tin sinh vien thu %d================== \n", i + 1);
	printf("Ho ten : %s\n",a.name);
	printf("Nam sinh : %d\n",a.y);
	printf("Diem trung binh: %.1f\n",a.dtb);
}
void Read(int &n){
	FILE *f;
	f = fopen("input.bin","rb");
	fread(&n,sizeof(n),1,f);
	printf("N = %d\n",n);
	SinhVien n1;
	for(int i = 0; i < n; i++){
		fread(&n1,sizeof(struct SinhVien),1,f);
		printf("Ten: %s |\t Nam sinh: %d |\t Diem trung binh: %.1f\n",n1.name, n1.y, n1.dtb);
	}
}
float DTBmx(float mx){
	for(int i = 0; i < n; i++){
		if(sv[i].dtb > mx) mx = sv[i].dtb;
	}
	return mx;
}
void solveDTBmx(int &n){
	float mx = DTBmx(0);
	printf("=================Sinh vien co DTB cao nhat===================\n");
	FILE *fo,*fi;
	fo = fopen("ketqua.bin","wb");
	fi = fopen("input.bin","rb");
	int stt = 0;
	SinhVien n1;
	fread(&n, sizeof(n),1,fi);
	for(int i = 0; i < n; i++){
		if(sv[i].dtb == mx){
			fread(&n1,sizeof(struct SinhVien),1,fi);
			xuat1svlm(sv[i],stt);
			fwrite(&n1,sizeof(n1),1,fo);
			stt++;
			printf("\n");
		}
	}
}
float DTBmn(float mn){
	for(int i = 0; i < n; i++){
		if(sv[i].dtb < mn) mn = sv[i].dtb;
	}
	return mn;
}
void solveDTBmn(){
	float mn = DTBmn(1e9);
	int stt = 0;
	printf("=================Sinh vien co DTB thap nhat===================\n");
	for(int i = 0; i < n; i++){
		if(sv[i].dtb == mn){
			xuat1svlm(sv[i],stt);
			stt++;
		}
	}
}
int main()
{
	struct SinhVien e1;
	scanf("%d",&n);

	Write(n);
//	Read(n);
	solveDTBmx(n);
//	printf("\n");
//	solveDTBmn();
}
