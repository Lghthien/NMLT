#include<iostream>
using namespace std;
int tongsonhanvoi2(int n){
	if(n==1) return 2;
	else return 2*n + tongsonhanvoi2(n-1);
}
int main(){
	int n;
	do{
		cout<<"nhap gia tri nguyen duong n: ";
		cin>>n;
	}while(n<=0);
	cout<<tongsonhanvoi2(n);
}
