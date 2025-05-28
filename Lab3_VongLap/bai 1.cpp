#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,gt=1;
	cout<<"nhap n: ";
	cin>>n;
	while (n<=0){
		cout<<"xin vui long nhap lai n: ";
		cin>>n;
	}
	for (int i=1; i<=n;i++){
	   gt*=i;
	}
	cout<<"ket qua cua n! la: "<<gt;
}
