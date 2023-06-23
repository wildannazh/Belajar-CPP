#include <iostream>
using namespace std;
main () {
	int i,jml_data;
	int nilai[999];
	cout<<"Masukkan jumlah data yang kamu mau = ";cin>>jml_data;
	for (i=1;i<=jml_data;i++){
		cout<<"Masukkan data ke "<<i<<" = ";cin>>nilai[i];
	}
	cout<<"Mengurutkan data"<<endl;
	for (i=1;i<=jml_data;i++){
		for (int j=i+1;j<=jml_data;j++){
			if (nilai[j]<nilai[i]){
				float temp = nilai[i];
				nilai [i] = nilai [j];
				nilai [j] = temp;
			}
		}
	}
	for (i=1;i<=jml_data;i++){
		cout<<" "<<nilai[i];
	}
}
