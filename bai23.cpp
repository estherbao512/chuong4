#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Nhap ba so nguyen duong a,b,c: ";
    cin >> a >> b >> c;
    if( a+b > c && b+c > a && a+c > b)
        cout <<"Chung co the la do dai cua ba canh tam giac!";
    return 0;

}
