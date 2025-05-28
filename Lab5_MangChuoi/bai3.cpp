#include<iostream>
#include<string.h>
using namespace std;
void XuatKyTuThuongTrongChuoi(string s,int n){
	cout<<"cac ky tu thuong la: "<<endl;
	for (int i=0;i<n;i++){
	  if(s[i]>='a' && s[i] <= 'z') cout<<s[i];
	}
}
void DaoNguocKyTuTrongChuoi(string s,int n){
	cout<<"chuoi sau khi bi dao nguoc la: "<<endl;
	for (int i=n-1;i>=0;i--){
	   cout<<s[i];
	}
}
void ViTriChanVietHoaViTriLeVietThuong(string s,int n){
	string a;
	a=s;
	cout<<"chuoi vi tri chan viet hoa vi tri le viet thuong la: "<<endl;
	for (int i=0;i<n;i++){
		if (i%2==0){
			a[i]=toupper(a[i]);
		}
		else a[i]=tolower(a[i]);
	}
	for (int i=0;i<n;i++){
		cout<<a[i];
	}
}
void XuatRaKyTuDungMotLan(string s,int n){
	string a;
	a=s;
	cout<<"ky tu xuat ra dung mot lan la: ";cout<<endl;
	char t;
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	int dem=1;
	for (int i=0;i<n;i++){   
		if(a[i]==a[i+1]) dem ++;
		else{
		if (dem==1) cout<<a[i];
		dem=1;
		}
	}
}
void XoaDauCachODauVaCuoiChuoi(string s,int n){
	string a;
	a=s;
for(int i=0;i<n;i++){ 
    if(a[i]==' '){
        for(int j=i;j<n-1;j++){
            a[j] = a[j+1]; 
        }
         
        a[n-1]=NULL; 
        i--;
        n--; 
     }
    else break;    
    }
    for(int i=n-1;i>=0;i--){ 
    if(a[i]==' '){
        for(int j=i;j>=0;j--){
            a[j] = a[j-1]; 
        }
         
        a[n-1]=NULL; 
        i++;
        n--; 
     }
    else break;    
    }
    cout<<"chuoi sau khi da xoa dau cach o dau va cuoi: "<<endl<<a;
}
int main(){
  string s;int n;
  cout<<"Nhap chuoi: ";
  getline(cin,s);
  n=s.size();
  XuatKyTuThuongTrongChuoi(s,n);cout<<endl;
  DaoNguocKyTuTrongChuoi(s,n);cout<<endl;
  ViTriChanVietHoaViTriLeVietThuong(s,n);cout<<endl;
  XuatRaKyTuDungMotLan(s,n) ;cout<<endl;
  XoaDauCachODauVaCuoiChuoi(s,n);
  
}
