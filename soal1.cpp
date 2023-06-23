#include <iostream>
#include <cmath>
using namespace std;

int main() {
   float xBar, mu, sd, n, z;

   cout << "Masukkan nilai rata-rata sampel (x-bar): ";
   cin >> xBar;

   cout << "Masukkan nilai rata-rata populasi yang diasumsikan (mu): ";
   cin >> mu;

   cout << "Masukkan standar deviasi sampel (sd): ";
   cin >> sd;

   cout << "Masukkan ukuran sampel (n): ";
   cin >> n;

   z = (xBar - mu) / (sd / sqrt(n));

   cout << "Uji z-score: " << z << endl;

   if (z > 1.96 || z < -1.96) {
      cout << "Dalam tingkat signifikansi 0.05, hipotesis nol ditolak." << endl;
   } else {
      cout << "Dalam tingkat signifikansi 0.05, hipotesis nol tidak dapat ditolak." << endl;
   }

   return 0;
}

