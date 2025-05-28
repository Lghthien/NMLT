#include<iostream>
#include<math.h>
using namespace std;
void NhapMang(int*a,int n){
	cout<<"Nhap cac phan tu trong mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
}
void XuatMang(int*a,int n){
	cout<<"1a. Xuat cac phan tu trong mang: ";
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int Tong(int*a,int n){
	int sum=0;
	for (int i=0;i<n;i++){
		sum+=a[i];
	}
 return sum;
}
void SapXepMangGiamDan(int*a,int n){
	int b[n] ;int t;
	for (int i=0;i<n;i++){
		b[i]=a[i];
	}
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (b[i]<b[j]){
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	cout<<"1c.Mang sap xep giam dan la: ";
	for (int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
}
void DemSoLanXuatHienX(int*a,int n){
	int x,dem=0;
	cout<<"1d. Nhap phan tu x: ";cin>>x;
	for (int i=0;i<n;i++){
		if(a[i]==x) dem++;
	}
	cout<<"Phan tu "<<x<<" xuat hien "<<dem<<" lan.";
}
void XuatRaSoLuongPhanTuChanNhoHon20(int*a, int n){
	cout<<"1e. So luong phan tu chan nho hon 20 la: ";
	for (int i=0;i<n;i++){
		if (a[i]<20 && a[i]%2==0){
			cout<<a[i]<<" ";
		}
	}
}
void TimViTriPhanTuNhoNhatTrongMang(int*a, int n){
	int min=a[0];
	for (int i=0;i<n;i++){
		if(a[i]<min){
		  min=a[i];	
		}
	  }
	cout<<"1f. Vi tri phan tu nho nhat trong mang: ";
	for(int i=0;i<n;i++){
		if(a[i]==min) cout<<i<<" ";
	}
	}
void XuatDayDaoNguoc(int*a,int n){
	cout<<"1g. Xuat day dao nguoc phan tu trong mang: ";
	for (int i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Nhap so luong phan tu mang: ";cin>>n;
	int*a = new int [n];
	NhapMang(a,n);
	XuatMang(a,n);cout<<endl;
	cout<<"1b. Tong cac phan tu trong mang la: "<<Tong(a,n)<<endl;
	SapXepMangGiamDan(a,n);cout<<endl;
	DemSoLanXuatHienX(a,n);cout<<endl;
	XuatRaSoLuongPhanTuChanNhoHon20(a,n);cout<<endl;
	TimViTriPhanTuNhoNhatTrongMang(a, n);cout<<endl;
	XuatDayDaoNguoc(a,n);cout<<endl;
	delete a;
	
}
