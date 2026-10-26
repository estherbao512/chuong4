#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    s=1;
    cout << "Nhap so nguyen duong n:";
    cin >> n;
    for(int i=1;i<=n;i++)
        s*=i;
    cout << n << "!= " << s;
    return 0;
}
