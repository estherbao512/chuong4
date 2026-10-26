#include <bits/stdc++.h>
using namespace std;
int main(){
    double x,s;
    cout << "Nhap gia tri x:";
    cin >> x;
    if (x<-10)
        s= pow(x,3) - 2 * x+ 1/x;
    else if (x<=10)
        s= exp(x);
    else
        s=x +sqrt(x);
    cout << "f(x)=" << s;


    return 0;
}
