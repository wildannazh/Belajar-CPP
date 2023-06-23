#include <iostream>
#include <math.h>
using namespace std;
int main(){
//Data diri
cout<<"QUIZ PEMOGRAMAN KOMPUTER D\nNama : WILDAN NAZHIF IRSYADI\nNRP : 5003221109\nSesi 2"<<endl;
//membuat data
	int i,jml_data, nilai[999], ganjil[999], genap[999];
	cout<<"Masukkan jumlah data = ";cin>>jml_data;
	for (i=0;i<jml_data;i++){
		cout<<"Masukkan data ke-"<<i+1<<" = ";cin>>nilai[i];	
	}
//Memisahkan antara ganjil dan genap
int banyakA = 0;
int banyakB = 0;
for (int i = 0; i < jml_data; i++) {
    if (nilai[i] % 2 == 0) {
        genap[banyakA++] = nilai[i];
		} else {
		ganjil[banyakB++] = nilai[i];
        }
    }

//mengurutkan data
for (int i = 0; i < jml_data - 1; i++) {
    for (int j = 0; j < jml_data - i - 1; j++) {
        if (nilai[j] > nilai[j + 1]) {
            int temp = nilai[j];
            nilai[j] = nilai[j + 1];
            nilai[j + 1] = temp;
   }
  }
 }
cout<<"Urutan angka = ";
 for(i=0;i<jml_data;i++){
  cout<<" "<<nilai[i];
 }
cout<<endl;
//urutan angka genap
for (int i = 0; i < banyakA - 1; i++) {
    for (int j = 0; j < banyakA - i - 1; j++) {
        if (genap[j] > genap[j + 1]) {
            int temp = genap[j];
            genap[j] = genap[j + 1];
            genap[j + 1] = temp;
   }
  }
 }
cout<<"Urutan angka Genap = ";
 for(i=0;i<banyakA;i++){
  cout<<" "<<genap[i];
 }
cout<<endl;
//mencari mean (Rata-rata)
float totalA = 0;
for(i=0;i<banyakA;i++){
	totalA += genap[i];
 }
double rata_rata = totalA/banyakA;
cout<<"Rata-rata = "<<rata_rata<<endl;
//Mencari standar deviasi
float sdev = 0;
for(i=0;i<banyakA;i++){
	sdev += pow(genap[i]-rata_rata, 2)/(banyakA-1);
 }
sdev = sqrt(sdev);
cout<<"Standar deviasi = "<<sdev<<endl;
//mengurutkan yang ganjil aja
for (int i = 0; i < banyakB - 1; i++) {
    for (int j = 0; j < banyakB - i - 1; j++) {
        if (ganjil[j] > ganjil[j + 1]) {
            int temp = ganjil[j];
            ganjil[j] = ganjil[j + 1];
            ganjil[j + 1] = temp;
   }
  }
 }
 cout<<"Angka Ganjil = ";
 for(i=0;i<banyakB;i++){
  cout<<" "<<ganjil[i];
 }
 cout<<endl;
//Mencari Median
double median;
    if (banyakB % 2 == 0) {
        int w1 = banyakB / 2 - 1;
        int w2 = banyakB / 2;
        median = (ganjil[w1] + ganjil[w2]) / 2.0;
    } else {
        int w = banyakB / 2;
        median =ganjil[w];
    }
    cout<<"Median = "<<median<<endl;
//Nomor 2
cout<<"====================Nomor 2===================="<<endl;
int n;
cout<<"Masukkan banyak deret : ";
cin>>n;
cout<<endl;
for(int i = 1; i<=n; i++){
	int faktorial=1;
	for(int j = 1; j<=i; j++){
		fakt *= j;
		cout<<faktorial<<" ";
	}
	cout<<endl;
	}
}
	
