#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Moi ban nhap vao so nguyen:";
    cin >> n;
    if (n <0)
        cout << "So vua nhap la so nguyen am ";
    else if (n>0)
        cout << "So vua nhap la so nguyen duong ";
    if (n % 2 ==0)
        cout << "va la so nguyen chan";
    else
        cout << "va la so nguyen le";
    return 0;
}
