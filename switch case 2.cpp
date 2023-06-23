#include <iostream>
using namespace std;
int main (){
	int rumus;
	cout<<"Pilih Luas apa yang mau dihitung = "<<endl;
	cout<<"1. Segitiga"<<endl;
	cout<<"2. Persegi panjang"<<endl;
	cout<<"3. lingkaran"<<endl;
	cin >> rumus;
	switch (rumus){
		case 1:
			float a,t,L;
			cout<<"Masukkan Panjang Alas";cin>>a;
			cout<<"Masukkan tinggi";cin>>t;
			L=0.5*a*t;
			cout<<"Luas Segitiganya adalah = "<<L;
			break;
		case 2:
			float b,c,Lp;
			cout<<"Masukkan panjang";cin>>b;
			cout<<"Masukkan lebar";cin>>c;
			Lp=a*b
			cout<<"Luas Persegi Panjangnya adalah = "<<Lp;
			break;
		case 3:
			float r,Ll;
			cout<<"Masukkan jari-jari";cin>>r;
			Ll=3.14*r*r;
			cout<<"Luas Lingkarannya adalah = "<<Ll;
			break;	
	}		
	return 0;
}

