#include <iostream>
#include <iomanip> // header file untuk setprecision

using namespace std;

int main()
{
    double angka1 = 123456789.0;
    double angka2 = 100000000.0;
    double hasil = angka1 / angka2;

    cout << "Hasil pembagian dengan notasi e: " << hasil << endl;
    cout << "Hasil pembagian tanpa notasi e: " << fixed << setprecision(6) << hasil << endl;

    return 0;
}

