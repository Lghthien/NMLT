#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,gt=1;
	cout<<"nhap n: ";
	cin>>n;
	while (n<=0){
		cout<<"xin vui long nhap lai n: ";
		cin>>n;
	}
	if (n%2==0){
	for (int i=2; i<=n;i+=2){
	   gt*=i;
	   }
    }
	
	else {
	for (int i=1; i<=n;i+=2){
	   gt*=i;
	    }
	}
	cout<<"ket qua cua n!! la: "<<gt;
}
