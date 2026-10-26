#include <bits/stdc++.h>>
using namespace std;
int main(){
    float a,b,c,d,e,f,D,Dx,Dy,x,y;
    cout << "Nhap cac he so a b c d e f";
    cin >> a >> b >> c >> d >> e >> f;
    D=a*e-b*d;
    Dx=c*e-b*f;
    Dy=a*f-c*d;
    if (D!=0){
        x=Dx/D;
        y=Dy/D;
        cout << "He co nghiem duy nhat!" << endl;
        cout << "x=" << x << endl << "y=" << y;
        }
    else{
        if(Dx==0 && Dy==0)
            cout << "He phuong trinh vo so nghiem";
        else
            cout << "He phuong trinh vo nghiem";
    }
}
