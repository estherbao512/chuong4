#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout << "nhap ki tu: ";
    cin >> ch;
    if (ch>='A'&& ch<='Z')
        cout << "ki tu vua nhap thuoc cac ky tu in hoa";
    else if(ch>='a'&& ch<='z')
        cout << "ki tu vua nhap thuoc cac ky tu thuong";
    else if(ch>='0'&& ch<='9')
        cout << "ki tu vua nhap thuoc cac ky tu so";
    else
        cout << "ky tu vua nhap thuoc cac ky tu khac";
    return 0;

}
