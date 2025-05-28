#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,s;
    cout<<"so km nguoi do di: "<<endl;
    cin>>n;
    switch (n)
    {
    case 1:{
        cout<<"so tien phai tra: "<<n*15000<<endl;
        break;}
    case 2:
    case 3:
    case 4:
    case 5:
        {cout<<"so tien phai tra: "<<15000+(n-1)*13500<<endl;
        break;}
    default:{ 
        s=15000+4*13500+(n-5)*11000;
        if(n>120){
            s=s*0.9;
            cout<<"so tien phai tra: "<<s<<endl;
        }
        else {
            cout<<"so tien phai tra: "<< s <<endl;
        }
        break;
    }
    
    }
}