#include <iostream>
using namespace std;

int main() {
    int jenisSuhu;
    float suhu, hasil;

	cout<< "Masukkan suhu celcius: ";cin>>suhu;
    cout<< "Mau diubah ke apa?"<<endl;
    cout<< "1 = Ubah celcius ke Reamur"<<endl;
    cout<< "2 = Ubah celcicus ke Fahrenheit"<<endl;
    cout<< "3 = Ubah celcius ke Kelvin"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Pilih jenis suhu = ";cin >> jenisSuhu;

    

    if (jenisSuhu==1) {
        cout << "Suhu dalam Reamur= " << 0.8*suhu << " R" << endl;
	} 
	else if (jenisSuhu==2) {
        cout << "Suhu dalam Fahrenheit= " << ((9/5)*suhu)+32 << " F" << endl;
    }
	else if (jenisSuhu==3){
		cout << "Suhu dalam Kelvin= "<<273+suhu<<" K"<<endl;
	}
    else {
        cout << "Jenis suhu tidak valid" << endl;
    }

    return 0;
}

