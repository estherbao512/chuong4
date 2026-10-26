#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout << "Moi nhap ki tu Alphabet:";
    cin >> ch;
    if (ch>='A'&& ch<='Z')
        cout << "Ki tu duoc chuyen sang in thuong:" << char(tolower(ch));
    else if (ch>='a'&& ch<='z')
        cout << "Ki tu duoc chuyen sang in hoa:" << char(toupper(ch));
    return 0;

}
