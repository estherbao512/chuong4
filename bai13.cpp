#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if (n<2){
        cout << n << " Khong phai la so nguyen to!";
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0){
        cout << n << " Khong phai la so nguyen to!";
        return 0;
        }
    cout << n << " la so nguyen to!";
    return 0;

}
