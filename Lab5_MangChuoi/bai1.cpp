#include<iostream>
#include<math.h>
using namespace std;
int NhapMang(int a[],int n){
	cout<<"Nhap mang: ";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
}
int TongCacPhanTu(int a[], int n){
	int s=0;
	for(int i=0; i<n; i++){
		s+=a[i];
	}
	return s;
}
int SoLanXuatHienPhanTu(int a[],int n){
	int x, slan=0;
	cout<<"1b. Nhap phan tu: ";cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			slan++;
		}
	}
	cout<<"Phan tu "<<x<<" xuat hien: ";
	return slan;
}
int PhanTuChanNhoHon20(int a[],int n){
	cout<<"1c. Phan tu chan nho hon 20 la: ";
	for(int i=0; i<n; i++){
		if(a[i]%2==0 && a[i]<20 ) cout<<a[i]<<" ";
	}
}
int TimViTriPhanTuNhoNhat(int a[],int n){
	int min=a[0];
	for(int i=0; i<n; i++){
		if(a[i] < min) min=a[i];
	}
	cout<<"1d. Vi tri phan tu nho nhat trong mang la: ";
	for(int i=0; i<n; i++){
		if(a[i] == min) cout<<i<<" ";
	}
}
int XuatDayDaoNguoc(int a[],int n){
	cout<<"1e. Xuat mang day dao nguoc: ";
	for (int i=n-1; i>=0 ; i--){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[100],n;
	cout<<"nhap so phan tu cua mang: ";cin>>n;
	NhapMang(a,n);
	cout<<"1a. Tong cac phan tu cua mang la: "<<TongCacPhanTu(a,n)<<endl;
	cout<<SoLanXuatHienPhanTu(a,n)<<" lan "<<endl;
	PhanTuChanNhoHon20(a,n); cout<<endl;
	TimViTriPhanTuNhoNhat(a,n);cout<<endl;
	XuatDayDaoNguoc(a,n);
}
