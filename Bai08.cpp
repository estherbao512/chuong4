#include <bits/stdc++.h>
using namespace std;
int main() {
    int loaiXe;
    double quangduong,gia1, kmmocua, gia2, gia3;
    double tien= 0;
    cout << "                  MENU LOAI XE                 " << endl;
    cout << "1. T.Vios, H.Vera, N.Sunny"<< endl;
    cout << "2. T.Inova J, K.Caren, N.Livina" << endl;
    cout << "3. T.Inova G, T.Inova E, T.Inova J - 2014" << endl;
    cout << "4. Morning, Hyundai i10" <<endl;
    cout << "Chon loai xe (1-4): ";
    cin >> loaiXe;
    cout << "Nhap quang duong da di: ";
    cin >> quangduong;
    switch (loaiXe) {
        case 1:
            gia1 = 11000;
            kmmocua = 0.775;
            gia2 = 14200;
            gia3 = 11200;
            break;
        case 2:
            gia1 = 11000;
            kmmocua = 0.738;
            gia2 = 14900;
            gia3 = 12800;
            break;
        case 3:
            gia1 = 12000;
            kmmocua = 0.745;
            gia2 = 16100;
            gia3 = 13800;
            break;
        case 4:
            gia1 = 10000;
            kmmocua = 0.781;
            gia2 = 12800;
            gia3 = 10200;
            break;
    }
    if (quangduong <= kmmocua)
        tien = gia1;
    else if (quangduong <= 30)
        tien = gia1 + (quangduong - kmmocua) * gia2;
    else
        tien = gia1 + (30 - kmmocua) * gia2 + (quangduong - 30) * gia3;
    cout << "Tong tien cuoc taxi: " << tien;
    return 0;
}
