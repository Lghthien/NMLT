#include<iostream>
#include<math.h>
using namespace std;
int snt(int a, int b){
	if(a==1) return 0;
	if(a==2)  return b;
	if (b%(a-1)!=0) return snt(a-1,b);
	return 0;
}
int tsnt(int n){
	int m;
	m=n;
	if(n==0) return 0;
	else return snt(n,m)+ tsnt(n-1);
}
int main(){
	int n;
	do{ 
    cout<<"nhap so nguyen duong n: ";
    cin>>n;
	} while(n<=0);
	cout<<tsnt(n);
}
