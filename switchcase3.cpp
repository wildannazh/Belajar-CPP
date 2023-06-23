#include <iostream>
using namespace std;
int main(){
	int pil,jum,maam;
	cout<<"======= DAFTAR TIKET KERETA API ========="<<endl;
	cout<<"Pilihan 1: EKONOMI: Rp. 150000"<<endl;
	cout<<"Pilihan 2: BISNIS: Rp. 250000"<<endl;
	cout<<"Pilihan 3: EXECUTIVE: Rp. 375000"<<endl;
	cout<<"*****************************************"<<endl;
	cout<<"Masukkan pilihan (1-3)= ";cin>>pil;
	cout<<"Masukkan jumlah tiket = ";cin>>jum;
	cout<<"========================================="<<endl;
	cout<<"Apakah ingin membeli makanan? \n1. Ya \n2. Tidak"<<endl;
	cin>>maam;
	cout<<"========================================="<<endl;
	
	switch (pil){
		case 1:
			cout<<"Total harga Ekonomi yang dibayarkan = ";
			if (maam==1){
				cout<<"Rp. "<<(150000*jum)+20000<<endl;
			}
			else {
				cout<<"Rp. "<<150000*jum<<endl;
			}
			break;
		case 2:
			cout<<"Total harga Bisnis yang dibayarkan = ";
			if (maam==1){
				cout<<"Rp. "<<250000*jum+20000<<endl;
			}
			else {
				cout<<"Rp. "<<250000*jum<<endl;
			}
			break;
		default:
			cout<<"Total harga Executive yang dibayarkan = ";
			if (maam==1){
				cout<<"Rp. "<<375000*jum+20000<<endl;
			}
			else {
				cout<<"Rp. "<<375000*jum<<endl;
			}
		}
}
