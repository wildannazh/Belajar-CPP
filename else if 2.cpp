#include <iostream>

using namespace std;

int main() {
		float angka;
	cout  << "Masukkan Angka =";
	cin >>  angka;
	if (angka> 0){
		cout<< "Anda memasukkan bilangan positif"<< endl;
		cout<< "Bilangan tersebut adalah"<< endl;
		cout << angka;
	}
	else if (angka==0){
		cout << "Anda Memasukkan angka 0"<< endl;
	}
	else {
	cout << "Nilai yang anda masukkan bukan nilai positif"<<endl;
	}
   return 0;
}

	
