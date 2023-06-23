#include <iostream>
using namespace std;

void LuasPersegi(){
	float a;
	float luas;
	cout<<"\n=== LUAS PERSEGI ===\n";
	cout<<"Masukkan ukuran sisi : ";
	cin>>a;
	luas=a*a;
	cout<<"Luas Persegi : "<<luas;
	
}

void LuasPersegiPanjang(){
	float a, b;
	float luas;
	cout<<"\n=== LUAS PERSEGI PANJANG ===\n";
	cout<<"Masukkan ukuran panjang : ";
	cin>>a;
	cout<<"Masukkan ukuran lebar : ";
	cin>>b;
	luas=a*b;
	cout<<"Luas Persegi Panjang : "<<luas;
}

void LuasLingkaran(){
	float r;
	float luas;
	cout<<"\n=== LUAS LINGKARAN ===\n";
	cout<<"Masukkan ukuran jari jari : ";
	cin>>r;
	luas=3.14*r*r;
	cout<<"Luas Lingkaran : "<<luas;
}

void LuasTrapesium(){
	float a,b,t;
	float luas;
	cout<<"\n=== LUAS TRAPESIUM ===\n";
	cout<<"Masukkan ukuran sisi atas : ";
	cin>>a;
	cout<<"Masukkan ukuran sisi bawah : ";
	cin>>b;
	cout<<"Masukkan ukuran tinggi : ";
	cin>>t;
	luas=((a+b)*t)/2;
	cout<<"Luas Trapesium : "<<luas;
}

void LuasSegitiga(){
	float a, b;
	float luas;
	cout<<"\n=== LUAS SEGITIGA ===\n";
	cout<<"Masukkan ukuran alas : ";
	cin>>a;
	cout<<"Masukkan ukuran tinggi : ";
	cin>>b;
	luas=a*b/2;
	cout<<"Luas Segitiga : "<<luas;
}

int main(){
	
	int n;
	cout<<"=== PROGRAM MENCARI LUAS ===\n";
	cout<<"Luas apa yang anda inginkan?\n";
	cout<<"1. Luas Persegi\n";
	cout<<"2. Luas Persegi Panjang\n";
	cout<<"3. Luas Lingkaran\n";
	cout<<"4. Luas Trapesium\n";
	cout<<"5. Luas Segitiga\n";
	cout<<"Jawab (1/2/3/4/5) : ";
	cin>>n;
	switch(n){
		case 1:
			LuasPersegi();
			break;
		case 2:
			LuasPersegiPanjang();
			break;
		case 3:
			LuasLingkaran();
			break;
		case 4:
			LuasTrapesium();
			break;
		case 5:
			LuasSegitiga();
			break;
		default:
			cout<<"Tidak Valid";
			break;
	}
	
	return 0;
}
