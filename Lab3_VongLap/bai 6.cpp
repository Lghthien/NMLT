#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,a,demchan=0,demle=0;
	
	cout<<"nhap n: ";
	cin>>n;
	
	while (n<=0){
		cout<<"xin vui long nhap lai n: ";
		cin>>n;
	}
	
	while(n>0){
		a=n%10;
		if (a % 2 == 0){
			demchan++;
		}
		else{
			demle++;
		}
		n=n/10;
	}
	cout<<"co "<< demchan << " chu so chan trong n"<< endl;
	cout<<"co "<< demle << " chu so le trong n";
}
