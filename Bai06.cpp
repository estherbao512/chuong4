#include <bits/stdc++.h>
using namespace std;
int main(){
    int thu;
    cout << "Nhap thu trong ngay:";
    cin >> thu;
    thu=thu%7;
    switch (thu) {
        case 2:
            cout << "Thu hai";
            break;
        case 3:
            cout << "Thu ba";
            break;
        case 4:
            cout << "Thu tu";
            break;
        case 5:
            cout << "Thu nam";
            break;
        case 6:
            cout << "Thu sau";
            break;
        case 0:
            cout << "Thu bay";
            break;
        case 1:
            cout << "Chu nhat";
            break;
    }
    return 0;
}

