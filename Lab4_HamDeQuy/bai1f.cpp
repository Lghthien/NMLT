#include<iostream>
using namespace std;
int tcu(int n,int m){
	if(n==1) return 1;
	if (m%n==0) return n + tcu(n-1,m);
	return tcu(n-1,m);
}
int main(){
	int n,m;
	do{
	   cout<<"nhap so nguyen duong n: ";
	   cin>>n;
	}while(n<=0);
	m=n;
	cout<<tcu(n,m);
}
