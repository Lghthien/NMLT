#include<iostream>
#include<math.h>
using namespace std;
int tcsl(int n){
	int a;
	a=n%10;
	if (n==0) return 0;
	if (a%2!=0){
	return a+tcsl(n/10);	
	}
	return tcsl(n/10);
}
int main(){
	int n;
	do{
		cout<<"nhap so nguyen duong N: ";
		cin>>n;
	} while (n<=0);
	cout<<tcsl(n);
}

