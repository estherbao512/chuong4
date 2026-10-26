#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,delta,x1,x2;
    cout << "Nhap he so a b c: ";
    cin >> a >> b >> c;
    delta=b*b-4*a*c;
    if (delta>0){
        x1= (-b+sqrt(delta))/(2*a);
        x2= (-b-sqrt(delta))/(2*a);
        cout << "Phuong trinh co 2 nghiem phan biet!\n";
        cout << "x1= " << x1 << endl;
        cout << "x2= " << x2;
    }
    else if (delta==0){
        x1=(-b)/(2*a);
        cout << "Phuong trinh co nghiem kep! x1=x2= " << x1;
    }
    else cout << "Phuong trinh vo nghiem!";
    return 0;

}
