#include<iostream>
#include<math.h>
using namespace std;
struct diem {
	int x,y;
};
void NhapOXY(diem &A){
	cout<<"3a. Nhap toa do diem A: ";
	cin>>A.x>>A.y;
}
void XuatOXY(diem A){
	cout<<"("<<A.x<<","<<A.y<<")";
}
void KhoangCachGiua2diem(diem A){
	diem B; float t;
	cout<<"Nhap toa do diem B: ";
	cin>>B.x>>B.y;
	cout<<"3b. Khoang cach giua 2 diem A,B la: ";
	t=sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
	cout<<t;
}
diem TimDiemDoiXungQuaGocToaDo(diem A){
	diem C;
	C.x=A.x*(-1);
	C.y=A.y*(-1);
	return C;
}
diem TimDiemDoiXungQuaTrucOX(diem A){
	diem C;
	C.x=A.x;
	C.y=A.y*(-1);
	return C;
}
diem TimDiemDoiXungQuaTrucOY(diem A){
	diem C;
	C.y=A.y;
	C.x=A.x*(-1);
	return C;
}
int main(){
	diem A;
	NhapOXY(A);
	cout<<"Toa do diem A la: ";XuatOXY(A);cout<<endl;
	KhoangCachGiua2diem(A);cout<<endl;
	cout<<"3c. Diem doi xung A qua goc toa do la: ";XuatOXY(TimDiemDoiXungQuaGocToaDo(A));cout<<endl;
	cout<<"3d. Diem doi xung A qua truc Ox la: ";XuatOXY(TimDiemDoiXungQuaTrucOX(A));cout<<endl;
	cout<<"3d. Diem doi xung A qua truc Oy la: ";XuatOXY(TimDiemDoiXungQuaTrucOY(A));cout<<endl;
}
