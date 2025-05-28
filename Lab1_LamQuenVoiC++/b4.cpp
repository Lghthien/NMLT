#include<iostream>
#include<algorithm>
 using namespace std;

 int main()
 {
    float a,b,c,d,e,f;

    cout<<" diem mon toan ";
    cin>>a;
    cout<<" he so mon toan ";
    cin>>b;

    cout<<" diem mon ly ";
    cin>>c;
    cout<<" he so mon ly ";
    cin>>d;

    cout<<" diem mon hoa ";
    cin>>e;
    cout<<" he so mon hoa ";
    cin>>f;

    cout<<"diem trung binh 3 mon"<<(float) (a*b+c*d+e*f)/(b+d+f) <<endl;
 }
