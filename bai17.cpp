#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    s=0;
    cout << "Nhap so tu nhien n:";
    cin >> n;
    do{
        s+=n%10;
        n/=10;
    }while(n!=0);
    cout << "Tong cua cac chu so la: " << s;
    return 0;
}
