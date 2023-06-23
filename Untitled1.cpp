#include <iostream>
using namespace std;

int main() {
   float alas, tinggi, luas; 

   cout << "Masukkan nilai alas Segitiga: ";
   cin >> alas;

   cout << "Masukkan nilai tinggi Segitiga: ";
   cin >> tinggi;


   luas = 0.5 * alas * tinggi;

   cout << "Luas Segitiga adalah: " << luas << endl;
   return 0;
}

