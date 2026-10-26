#include <bits/stdc++.h>
using namespace std;
int main(){
    double x,s;
    cout << "Nhap gia tri x:";
    cin >> x;
    if (x>0){
        s=pow(x,4) + log10(x);
        cout << "f(x)=" << s;
        }
    else{
        s=sqrt(2*abs(x)) +6/x;
        cout << "f(x)=" << s;
    }
    return 0;
}
