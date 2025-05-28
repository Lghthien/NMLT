#include<iostream>
#include <math.h>
using namespace std;
int dem(int n){
	if(n==0) return 0;
	else return 1 + dem(n/10);
}
int chuyendoiso(int n){
	int a=n%10;
	static int b=-1;
	b++;
	if(n==0) return 0;
	if (a==1) return   pow(2,b) + chuyendoiso(n/10);
    if (a==0) return chuyendoiso(n/10);}
bool checksonhiphan(int n){
	int a=n%10;
	if (n==0) return false;
	if (a!=0 && a!=1 ) return true;
	return checksonhiphan(n/10);
}
int main(){
	int n;
	do{
		cout<<"nhap so nhi phan ";
		cin>>n;
	} while(checksonhiphan(n) || dem(n)>8);
	cout<<chuyendoiso(n);
}
