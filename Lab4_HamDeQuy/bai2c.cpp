#include<iostream>
using namespace std;
float tongcacphanso(int n){
	if(n==1) return 1;
	else return 1.0/n + tongcacphanso(n-1);
}
int main(){
	int n;
	do{
		cout<<"nhap gia tri nguyen duong n: ";
		cin>>n;
	}while(n<=0);
	cout<<tongcacphanso(n);
}
