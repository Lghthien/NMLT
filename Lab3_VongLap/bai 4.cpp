#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,s=0,a;
	
	cout<<"nhap n: ";
	cin>>n;
	
	while (n<=0){
		cout<<"xin vui long nhap lai n: ";
		cin>>n;
	}
	
	while(n>10){
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	s=s*10+n;
	cout<<"so nguoc lai cua n la: "<<s;
}
