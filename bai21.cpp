#include <iostream>
using namespace std;
int main(){
    float goc;
    cout << "Nhap do:";
    cin >> goc;
    if (goc<=90 && goc>=0)
        cout << "Nam trong goc phan tu thu nhat";
    else if (goc<=180)
        cout << "Nam trong goc phan tu thu hai";
    else if (goc<=270)
        cout << "Nam trong goc phan tu thu ba";
    else
        cout << "Nam trong goc phan tu thu tu";
    return 0;
}
