#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,x,lt=1;
	cout<<"nhap x: ";
	cin>>x;
	
	cout<<"nhap n: ";
	cin>>n;
	
	while (x<=0){
		cout<<"xin vui long nhap lai x: ";
		cin>>x;
	}
	
	while (n<=0){
		cout<<"xin vui long nhap lai n: ";
		cin>>n;
	}
	
	for (int i=1; i<=n;i++){
	   lt*=x;
	}
	
	cout<<"ket qua cua x^n la: "<<lt;
}
