#include <bits/stdc++.h>
using namespace std;
bool nhuan(int nam){
    if(nam %400==0 || nam%4==0 && nam%100 !=0)
        return true;
    else
        return false;
}
int main(){
    int nam,thang;
    do {
        cout << "Moi nhap nam:";
        cin >> nam;
    } while (nam<1975);
    do {
        cout <<"Moi nhap thang:";
        cin >> thang;
    } while (thang>12);
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Thang co 31 ngay!";
            break;
        case 2:
            if(nhuan(nam)==true)
                cout << "Thang co 29 ngay!";
            else
                cout << "Thang co 28 ngay!";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Thang co 30 ngay!";
            break;
    }
}
