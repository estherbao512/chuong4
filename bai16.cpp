#include <bits/stdc++.h>
using namespace std;
int KiemTraSNT(int n){
    for (int i =2;i<=sqrt(n);i++)
        if(n%i==0)
        return 0;
    return 1;
}
int main(){
    int n;
    cout << "Nhap so nguyen duong n:";
    cin >> n;
    cout << "Cac so nguyen to nho hon " << n << " la:\n";
    for (int i=2;i<n;i++)
        if (KiemTraSNT(i)==1)
            cout << i << ' ';
    return 0;

}

