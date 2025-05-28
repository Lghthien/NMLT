#include<iostream>
#include<math.h>
#define MARX 100
#define MIRX 100
using namespace std;
int NhapMaTran(int a[MARX][MIRX],int n, int m){
	cout<<"Nhap Ma Tran: "<<endl;
	for(int i=0; i<n; i++){
		for ( int j=0; j<m ;j++)
		cin>>a[i][j];
	}
}
int PhanTuLonNhatCuaMang(int a[MARX][MIRX],int n, int m){
	int max=a[0][0];
		for(int i=0; i<n; i++){
		for ( int j=0; j<m ;j++)
	       if(a[i][j]>max) max=a[i][j];
	}
	return max;
}
int InCacPhanTuTrenDuongCheoChinh(int a[MARX][MIRX],int n, int m){
	    cout<<"2b. Cac phan tu nam nua tren duong cheo chinh: ";
		for(int i=0; i<n; i++){
		for ( int j=i+1; j<m ;j++){
	       cout<<a[i][j]<<" "; }
	}
}
int TimGiaTriNhoNhatTrenTungDong(int a[MARX][MIRX],int n, int m){
	    cout<<"2c. ";
		for(int i=0; i<n; i++){
			int min=a[i][0];
		for ( int j=0; j<m ;j++)
	       if(a[i][j]<min) min=a[i][j];
	       cout<<"Gia tri nho nhat tren dong "<<i+1<<" la: "<<min<<endl;
	}
}
int TimGiaTriLonNhatTrenTungCot(int a[MARX][MIRX],int n, int m){
	    cout<<"2d. ";
		for(int j=0; j<m; j++){
			int max=a[0][j];
		for ( int i=0; i<n ;i++)
	       if(a[i][j]>max) max=a[i][j];
	       cout<<"Gia tri lon nhat tren cot "<<j+1<<" la: "<<max<<endl;
	}
}
bool ktraSNT(int a){
	if (a<2) return false;
	else if (a==2) return true;
	else{for (int i=2;i<=sqrt(a);i++){
		if (a%i==0) return false;
	}
	return true;
  }
}
int InSoNguyenToTrongMang(int a[MARX][MIRX],int n,int m){
	cout<<"2e. So nguyen to co trong mang la: ";
	for(int i=0; i<n; i++){
		for ( int j=0; j<m ;j++){
	    if(ktraSNT(a[i][j])==1) {
	    	cout<<a[i][j]<<" ";
		  }
		}
	}
}
int main(){
int a[MARX][MIRX],n,m;
cout<<"nhap so dong: ";cin>>n;
cout<<"nhap so cot: ";cin>>m;
NhapMaTran(a,n,m);cout<<endl;
cout<<"2a. Phan tu lon nhat cua Mang la: "<<PhanTuLonNhatCuaMang(a,n,m);cout<<endl<<endl;
InCacPhanTuTrenDuongCheoChinh(a,n,m);cout<<endl<<endl;
TimGiaTriNhoNhatTrenTungDong(a,n,m);cout<<endl;
TimGiaTriLonNhatTrenTungCot(a,n,m);cout<<endl;
InSoNguyenToTrongMang(a,n,m);
}
