#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    s=1;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        s= s+i + n/i;
    }
    if (s==n)
        cout << n << " la so hoan hao!";
    else cout << n << " khong phai la so hoan hao";
    return 0;
}
