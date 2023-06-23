#include <iostream>
#include <cmath>

// Fungsi untuk menghitung mean
double calculateMean(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Fungsi untuk menghitung standard deviation
double calculateStandardDeviation(int arr[], int size, double mean) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(arr[i] - mean, 2);
    }
    return sqrt(sum / (size - 1));
}

// Fungsi utama
int main() {
    // Sampel pertama
    int sample1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(sample1) / sizeof(sample1[0]);

    // Sampel kedua
    int sample2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(sample2) / sizeof(sample2[0]);

    // Menghitung mean dan standard deviation untuk setiap sampel
    double mean1 = calculateMean(sample1, size1);
    double mean2 = calculateMean(sample2, size2);
    double sd1 = calculateStandardDeviation(sample1, size1, mean1);
    double sd2 = calculateStandardDeviation(sample2, size2, mean2);

    // Menghitung t-value
    double tValue = (mean1 - mean2) / sqrt((pow(sd1, 2) / size1) + (pow(sd2, 2) / size2));

    // Menampilkan hasil
    std::cout << "Sample 1 mean: " << mean1 << std::endl;
    std::cout << "Sample 2 mean: " << mean2 << std::endl;
    std::cout << "Sample 1 standard deviation: " << sd1 << std::endl;
    std::cout << "Sample 2 standard deviation: " << sd2 << std::endl;
    std::cout << "t-value: " << tValue << std::endl;

    return 0;
}

