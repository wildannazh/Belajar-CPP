#include <iostream>

int main() {
    int base[] = {2, 3, 5, 7};   // Array berisi bilangan dasar
    int exponent[] = {4, 5, 8, 6};   // Array berisi eksponen

    int result[4];   // Array untuk menyimpan hasil pangkat

    // Menghitung hasil pangkat untuk setiap elemen dalam array
    for (int i = 0; i < 4; i++) {
        result[i] = 1;
        for (int j = 0; j < exponent[i]; j++) {
            result[i] *= base[i];
        }
    }

    // Menampilkan hasil pangkat
    for (int i = 0; i < 4; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

