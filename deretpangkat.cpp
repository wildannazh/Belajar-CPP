#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Masukkan jumlah suku dalam deret: ";
    cin >> n;

    int base = 1;
    for (int i = 0; i < n; i++) {
        int term = pow(-4, i);
        cout<<term;
    }

    return 0;
}

