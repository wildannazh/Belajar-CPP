#include <iostream>
using namespace std;

const int MAX_SIZE = 50;

int main() {
    int a, b, i, j, c, d, data[50][50], C[50][50], D[50][50];
    int sum;
    int choice;
    char repeat;

    do {
        cout << "Banyak baris matriks A : ";
        cin >> a;
        cout << "Banyak kolom matriks A : ";
        cin >> b;

        for (i = 1; i <= a; i++) {
            for (j = 1; j <= b; j++) {
                cout << "Baris ke-" << i << " Kolom ke-" << j << " : ";
                cin >> data[i][j];
            }
        }

        cout << "Matriks A:\n";
        for (i = 1; i <= a; i++) {
            for (j = 1; j <= b; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Banyak baris matriks B : ";
        cin >> c;
        cout << "Banyak kolom matriks B : ";
        cin >> d;

        for (i = 1; i <= c; i++) {
            for (j = 1; j <= d; j++) {
                cout << "Baris ke-" << i << " Kolom ke-" << j << " : ";
                cin >> C[i][j];
            }
        }

        cout << "Matriks B:\n";
        for (i = 1; i <= c; i++) {
            for (j = 1; j <= d; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }

        if (b == c) {
            cout << "Hasil perkalian AxB:\n";
            for (i = 1; i <= a; i++) {
                for (j = 1; j <= d; j++) {
                    D[i][j] = 0;
                    for (int k = 1; k <= b; k++) {
                        D[i][j] += data[i][k] * C[k][j];
                    }
                    cout << D[i][j] << " ";
                }
                cout << endl;
            }
        } else {
            cout << "Gak bisa masbro.\n";
        }

        if (a == d) {
            cout << "Hasil perkalian BxA:\n";
            for (i = 1; i <= c; i++) {
                for (j = 1; j <= b; j++) {
                    D[i][j] = 0;
                    for (int k = 1; k <= d; k++) {
                        D[i][j] += C[i][k] * data[k][j];
                    }
                    cout << D[i][j] << " ";
                }
                cout << endl;
            }
        } else {
            cout << "Gak bisa coy\n";
        }

        if (a == c && b == d) {
            cout << "Hasil penjumlahan A + B':\n";
            for (i = 1; i <= a; i++) {
                for (j = 1; j <= b; j++) {
                    D[i][j] = data[i][j] + C[j][i];
                    cout << D[i][j] << " ";
                }
                cout << endl;
            }
        } else {
            cout << "Ntahlah bang \n";
        }

        cout << "Apakah ingin mengulang? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
