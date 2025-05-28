#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<" nhap do dai 3 canh tam giac"<<endl;
    cout<<" canh thu nhat: ";cin>>a;
    cout<<" canh thu hai: ";cin>>b;
    cout<<" canh thu ba: ";cin>>c;
    if (a+b>c && a+c>b && b+c>a && a-b<c && a-c<b && b-c<a && b-a<c && c-a< b && c-b<a ){
        if (a*a+b*b==c*c || a*a+c*c==b*b ||  c*c+b*b==a*a ){
              cout<<"day la tam giac vuong";
            }
        else if (a==b){
            if (b==c){
            cout<<" day la tam giac deu";
            }
            else{
            cout<<" day la tam giac can";}
        }   
         else if (a==c){
            if (b==c){
            cout<<" day la tam giac deu";
            }
            else{
            cout<<" day la tam giac can";}
        }   
         else if (b==c){
            if (c==a){
            cout<<" day la tam giac deu";
            }
            else{
            cout<<" day la tam giac can";}
        }   
        else {
            cout<<" day la tam giac thuong";
        }
        }
        else {
            cout<<" day khong phai la 3 canh cua tam giac";
        }
    }
