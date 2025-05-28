#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
   int a,b,c,d;
   double e,f,g;
 int main ()
 {
   

   cout<<" nhap 3 hang tu cua phuong trinh :"<<endl;
    cout<<"nhap a: "<<endl; cin>>a; 
     cout<<"nhap b: "<<endl;cin>>b;
     cout<<"nhap c: "<<endl;cin>>c;

   if (a==0)
    {
        if (b==0)
        {
           if (c==0)
           {
             cout<<" phuong trinh vo so nghiem";
           }
            else
           {
             cout<<" phuong trinh vo nghiem";
           }
        }
         else
        {
            cout<<" nghiem cua phuong trinh la: "<<(float) -c/b<<endl;
        }
    }
   else 
      {d = ((b*b)-(4*a*c));
       e = sqrt(d);
        if (d<0)
              {
                cout<<"phuong trinh vo nghiem"<<endl;
              }
        else if (d==0)
                       {
                        cout<<" phuong trinh co nghiem kep: "<<(float) -b/(2*a) <<endl;
                       }
        else  
                       {
                        f=((-b+e)/(2*a));
                        g=((-b-e)/(2*a));
                         cout<<"phuong trinh co 2 nghiem"<<endl;
                         cout<<" nghiem thu nhat: "<< f  << endl;
                         cout<<" nghiem thu hai: "<<  g  << endl;
                       }
      }
   
 }