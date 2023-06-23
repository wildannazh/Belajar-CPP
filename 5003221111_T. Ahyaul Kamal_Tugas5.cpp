#include<iostream>
using namespace std;
int main()
{
		cout<<"T.Ahyaul Kamal\nNRP 5003221111"<<endl;
	cout<<"==================================="<<endl;

	int kerja, sekolah;
	double Pendapatan, Tanggungan;
	int umur;
	cout<<"Masukan umur: ";
	cin>>umur;
	if (umur>=18){
		cout<<"Apakah sudah bekerja?\n0: belum kerja\n1: Kerja \njawab: ";
		cin>>kerja;
		if (kerja==1){ 
			cout<<"Masukan pendapatan per-bulannya:\nRp. ";	
			cin>>Pendapatan;
			cout<<"Masukan jumlah tanggungan (orang): ";
			cin>>Tanggungan;
			double biaya = Pendapatan/Tanggungan;
			if (biaya<300000){
				cout<<"Penduduk Miskin"<<endl;
			}
			else{
				cout<<"Bukan Penduduk Miskin"<<endl;
			}
		}
		else if (kerja==0){
			cout<<"Penduduk Miskin"<<endl;
		}
		else{
			cout<<"Angka yang ada masukkan salah"<<endl;
		}	
	}
	else{
		cout<<"Apakah masih bersekolah?\n0: Tidak\n1: Masih\nJawab:"<<endl;
		cin>>sekolah;
		
		if(sekolah==1){
			cout<<"Bukan Penduduk Miskin"<<endl;
		}
		else if(sekolah==0){
			cout<<"Penduduk Miskin"<<endl;
		}
		else{
			cout<<"Angka yang ada masukkan salah"<<endl;
		}
	}
	return 0;
}
