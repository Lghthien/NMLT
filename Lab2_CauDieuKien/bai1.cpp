/*nhap 3 so in ra thu tu tang dan*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"nhap so a: ";cin>>a;
    cout<<"nhap so b: ";cin>>b;
    cout<<"nhap so c: ";cin>>c;
    cout<<" day so sau khi duoc sap xep"<<endl;
    if (a<b && a<c){
        if (b<c){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else {
             cout<<a<<" "<<c<<" "<<b<<endl;
        }
    }
    else if ( a< b && a>c ){
        cout<<c<<" "<<a<<" "<<b<<endl;
    }
    else if (a>b && a>c){
         if (b<c){
            cout<<b<<" "<<c<<" "<<a<<endl;
        }
        else {
             cout<<c<<" "<<b<<" "<<a<<endl;
        }
    }
    else {
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
}