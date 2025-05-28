#include<iostream>
using namespace std;
long long somux(int x,int n){
	if(n==0) return 1;
	else return x * somux(x,n-1);
}
int main(){
	int n,x;
	do{
		cout<<"nhap gia tri nguyen duong x,n: ";
		cin>>x>>n;
	}while(x<=0 && n<0);
	cout<<somux(x,n);
}
