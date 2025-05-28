#include<iostream>
#include<math.h>
using namespace std;
int dem(int n){
    if(n<10) return 1;
	else return 1+dem(n/10);    
}
int snd(int n){
	if (n<10) return n;
	else return (n%10)*pow(10,dem(n/10))+snd(n/10);
}
int main(){
	int n;
	do { cout<<"nhap gia tri nguyen duong n: ";
	     cin>>n;}
	     while(n<=0);
	cout<<snd(n);
}
