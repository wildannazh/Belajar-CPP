#include <iostream>
using namespace std;
int main(){
	int pil,jum;
	cout<<"======= DAFTAR TIKET KERETA API ======="<<endl;
	cout<<"Pilihan 1: EKONOMI: Rp. 150000"<<endl;
	cout<<"Pilihan 2: BISNIS: Rp. 250000"<<endl;
	cout<<"Pilihan 3: EXECUTIVE: Rp. 375000"<<endl;
	cout<<"***************************************"<<endl;
	cout<<"Masukkan pilihan (1-3)= ";cin>>pil;
	cout<<"Masukkan jumlah tiket = ";cin>>jum;
	
	if (pil=1){
		cout<<"Total harga tiket Ekonomi yang dibeli = ";
		cout<<"Rp. "<<150000*jum<<endl;
	}
	else if (pil=2){
		cout<<"Total harga tiket Bisnis yang dibeli = ";
		cout<<"Rp. "<<250000*jum<<endl;
	}
	else {
		cout<<"Total harga tiket Executive yang dibeli = ";
		cout<<"Rp. "<<375000*jum<<endl;
	}			
	

}
