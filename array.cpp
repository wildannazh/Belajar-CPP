#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x, sum, sumSquared;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    cout << "Masukkan bilangan: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        sumSquared += pow(x, 2);
    }

    double mean = sum / n;
    double variance = (sumSquared / n) - pow(mean, 2);

    cout << "Varians = " << variance << endl;

    return 0;
}

