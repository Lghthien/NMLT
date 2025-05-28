#include<iostream>
using namespace std;
long long giaithuachanle(int n){
	if(n==0) return 1;
	else if (n==1) return 1;
	else return n * giaithuachanle(n-2);
}   
int main(){
	int n;
	do{
		cout<<"nhap gia tri nguyen duong n: ";
		cin>>n;
	}while(n<=0);
	cout<<giaithuachanle(n);
}
