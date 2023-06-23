#include <iostream>

using namespace std;

int main() {
    float angka1, angka2, hasil;
    char operasi;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch(operasi) {
        case '+':
            hasil = angka1 + angka2;
            cout << "Hasil dari " << angka1 << " + " << angka2 << " = " << hasil << endl;
            break;
        case '-':
            hasil = angka1 - angka2;
            cout << "Hasil dari " << angka1 << " - " << angka2 << " = " << hasil << endl;
            break;
        case '*':
            hasil = angka1 * angka2;
            cout << "Hasil dari " << angka1 << " * " << angka2 << " = " << hasil << endl;
            break;
        case '/':
            hasil = angka1 / angka2;
            cout << "Hasil dari " << angka1 << " / " << angka2 << " = " << hasil << endl;
            break;
        default:
            cout << "Operator yang dimasukkan tidak valid." << endl;
            break;
    }

    return 0;
}

