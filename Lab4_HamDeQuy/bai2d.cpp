#include<iostream>
using namespace std;
long long giaithua(int n){
	if(n==1) return 1;
	else return n * giaithua(n-1);
}
long long tonggiaithua(int n){
	if(n==1) return 1;
	else return giaithua(n) + tonggiaithua(n-1);
}
int main(){
	int n;
	do{
		cout<<"nhap gia tri nguyen duong n: ";
		cin>>n;
	}while(n<=0);
	cout<<tonggiaithua(n);
}
