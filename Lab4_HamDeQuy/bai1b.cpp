#include<iostream>
#include<math.h>
using namespace std;
bool sochinhphuong(int n, int m){
    if ( n==0 ) return false;
	if (n*n==m)return true;
	return sochinhphuong(n-1,m);
}
int main (){
	int n,m;
	do {
		cout<<" nhap gia tri nguyen duong n: ";
		cin>>n;
	}
	while(n<=0);
	m=n;
	cout<<boolalpha<<sochinhphuong(n,m);
}
