#include <iostream>
using namespace std;
int main () {
    float angka1, angka3, hasil;
    char c;
    cout << "masukkan angka pertama = ";
    cin >> angka1;
    cout << "masukkan operasi =";
    cin >> c;
    cout << "masukkan angka kedua = ";
    cin >> angka3;
    if (c =='+') {
        hasil=angka1+angka3;
        } else if (c == '-') {
        hasil=angka1-angka3;
        } else if (c == '/') {
        hasil=angka1/angka3;
        } else if (c == '*') {
        hasil=angka1*angka3;
        } else {
            cout << "error" << endl; 
        }

    cout <<hasil<<endl;
}