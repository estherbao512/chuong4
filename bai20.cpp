#include <iostream>
using namespace std;
int main(){
    long long n;
    cout << "Nhap so nguyen duong n:";
    cin >> n;
    cout << "So dao nguoc cua " << n << " la:";
    do{
        cout <<n%10;
        n/=10;
    }while(n!=0);
    return 0;
}
