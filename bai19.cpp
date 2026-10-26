#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap so nguyen duong n:";
    cin >> n;
    for(int i=0;i<=n-1;i++){
        int value = 1;
        for(int j=0;j<=i;j++){
            cout << ' ' << value;
            value = value*(i-j)/(j+1);
        }
        cout << endl;
    }
}
