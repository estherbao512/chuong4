#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cout << "Nhap 3 so nguyen a b c: ";
    cin >> a >> b >> c;
    if(a>b)
        swap(a,b);
    if (b>c)
        swap (b,c);
    if (a>b)
        swap (a,b);
    cout << "Theo thu tu tang dan: " << a << " < " << b << " < "<< c;
    return 0;
}
