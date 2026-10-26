#include <iostream>
using namespace std;
int main(){
    float a,b,max;
    cout << "Nhap 2 so thuc a,b:";
    cin >> a >> b;
    if(a>b)
        max=a;
    else max=b;
    cout << "Gia tri lon nhat la: " << max;
    return 0;
}
