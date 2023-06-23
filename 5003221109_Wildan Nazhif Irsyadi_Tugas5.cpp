#include <iostream>
using namespace std;

int main()
{
    cout << "TUGAS PROKOM D" << endl;
    cout << "Wildan Nazhif Irsyadi" << endl;
    cout << "NRP 5003221109" << endl;
    cout << "===================================" << endl;

    int kerja, sekolah;
    double Pendapatan, Tanggungan;
    int umur;

    cout << "Masukan umur: ";
    cin >> umur;

    if (umur >= 18)
    {
        cout << "Apakah sudah bekerja?" << endl;
        cout << "0: Pengangguran" << endl;
        cout << "1: Kerja dong" << endl;
        cout << "jawab: ";
        cin >> kerja;

        if (kerja == 1)
        {
            cout << "Masukan pendapatan setiap bulannya: Rp. ";
            cin >> Pendapatan;
            cout << "Masukan jumlah tanggungan: ";
            cin >> Tanggungan;

            double biaya = Pendapatan / Tanggungan;

            if (biaya < 300000)
            {
                cout << "Status: Penduduk Miskin" << endl;
            }
            else
            {
                cout << "Status: Bukan Penduduk Miskin" << endl;
            }
        }
        else if (kerja == 0)
        {
            cout << "Status: Penduduk Miskin" << endl;
        }
        else
        {
            cout << "Angka yang ada masukkan salah" << endl;
        }
    }
    else
    {
        cout << "Apakah masih bersekolah?" << endl;
        cout << "0: Tidak bersekolah" << endl;
        cout << "1: Masih bersekolah" << endl;
        cout << "Jawab: ";
        cin >> sekolah;

        if (sekolah == 1)
        {
            cout << "Status: Bukan Penduduk Miskin" << endl;
        }
        else if (sekolah == 0)
        {
            cout << "Status: Penduduk Miskin" << endl;
        }
        else
        {
            cout << "Angka yang ada masukkan salah" << endl;
        }
    }

    return 0;
}

