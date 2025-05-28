#include<iostream>
#include<math.h>
using namespace std;
bool snt(int n, int m){
	if(n==1) return false;
	if(n == 2) return true;
	if (m%(n-1)==0 ) return false;
	return snt(n-1,m);
	}
int main(){
	int n,m;
	do{ cout<<" nhap so nguyen duong n: ";
	    cin>>n;
	}
	while(n<=0);
	m=n;
	cout<<boolalpha<<snt(n,m);
}
