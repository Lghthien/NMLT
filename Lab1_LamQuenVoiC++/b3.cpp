#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a;
    int b,c;
    cout<<" nhap ten san pham : ";
    cin>>a;

    cout<<" nhap so luong san pham : ";
    cin>>b;

    cout << " nhap don gia san pham : ";
    cin>>c;

    cout<<" san pham "<<a<<endl;
    cout<<" co so tien "<<b*c<<endl;
    cout << "gia tri gia tang " << (double) b * c * 0.1;
    return(0);
}