#include <iostream>
using namespace std;

int main() {
  int n,i;
  double num, sum, avg;
  
  cout << "Masukkan jumlah bilangan: ";
  cin >> n;

  for(i = 1; i <= n; i++) {
    cout << "Masukkan bilangan ke-" << i << ": ";
    cin >> num;
    sum += num;
  }

  avg = sum / n;
  cout << "Rata-rata dari " << n << " bilangan adalah " << avg << endl;

  return 0;
}

