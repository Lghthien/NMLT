#include<iostream>
using namespace std;
int tong(int n){
	if(n==1) return 1;
	else return n + tong(n-1);
}
int main(){
	int n;
	do{
		cout<<"nhap gia tri nguyen duong n: ";
		cin>>n;
	}while(n<=0);
	cout<<tong(n);
}
