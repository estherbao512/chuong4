#include <bits/stdc++.h>
using namespace std;
int UCLN(int a, int b){
    while(a!=b)
        if(a>b)
        a=a-b;
        else b=b-a;
    return a;
}

int main(){
    int a,b,ucln;
    cout << "Nhap so nguyen duong a,b: ";
    cin >> a >> b;
    ucln=UCLN(a,b);
    cout << "UCLN la " << ucln << endl;
    cout << "BCNN la " << (a*b)/ucln;
    return 0;
}
