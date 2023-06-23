#include <iostream>
using namespace std;
int main (){
	cout<<"Masukkan Angka = ";
	int angka;
	cin >> angka;
	switch (angka){
		case 1:
			cout << "Hari ke -"<<angka<<"adalah SENIN"<<endl;
			cout << "Semangat hati SENINnya"<<endl;
			break;
		case 2:
			cout << "Hari ke -"<<angka<<" adalah SELASA"<<endl;
			cout << "Semangat hati SELASAnya"<<endl;
			break;

		case 3:
			cout << "Hari ke -"<<angka<<" adalah RABU"<<endl;
			cout << "Semangat hati RABUnya"<<endl;
			break;

		case 4:
			cout << "Hari ke -"<<angka<<" adalah KAMIS"<<endl;
			cout << "Semangat hati KAMISnya"<<endl;
			break;
		case 5:
			cout << "Hari ke -"<<angka<<" adalah JUMAT"<<endl;
			cout << "Semangat hati JUMATnya"<<endl;
			break;

		case 6:
			cout << "Hari ke -"<<angka<<" adalah SABTU"<<endl;
			cout << "Semangat hati SABTUnya"<<endl;
			break;
		case 7:
			cout << "Hari ke -"<<angka<<" adalah MINGGU"<<endl;
			cout << "Semangat hati MINGGUnya"<<endl;
			break;			
	}
	return 0;
}

