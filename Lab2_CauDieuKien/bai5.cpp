#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int d,m,y;
    cout<<" nhap thang, nam: "<<endl;
    cout<<" thang ";cin>>m;
    cout<<" nam ";cin>>y;
    if (y<1975){
        cout<<" nam khong hop le"<<endl;
    }
    else{
        cout<<" nam hop le " << endl;
    }
      if (m<1 || m>12){
        cout<<" thang khong hop le"<<endl;
    }
    else{
        cout<<" thang hop le " << endl;
    }
    switch (m)
    {
    case 2:
        {if(y%4==0)
            cout<<" thang "<<m<<" co 29 ngay"<<endl;
        else 
            cout<<" thang "<<m<<" co 29 ngay"<<endl;}
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10: 
    case 12:
         {cout<<"thang "<<m<<" co 31 ngay"<<endl;
         break; }
    
    case 4:
    case 6:
    case 9:
    case 11:
     {cout<<"thang "<<m<<" co 30 ngay"<<endl;
         break; }
        
    }
}