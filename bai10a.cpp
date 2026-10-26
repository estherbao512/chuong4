#include <bits/stdc++.h>
using namespace std;
int main(){
    float s=0;
    int n;
    char cau;
    cout << "Nhap vao so nguyen duong n:";
    cin >> n;
    cout << "Chon cau a hoac cau b:";
    cin >> cau;
    if (cau=='a'){
    for (int i=1;i<=n;i++)
        s+=1.0/(2*i);
    }
    else if (cau=='b'){
    for (int i=1;i<=n;i++)
        s+=1.0/i;
    }
    cout << "Tong la:" << s;
    return 0;
}
