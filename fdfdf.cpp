#include<iostream>
using namespace std;
main(){
	int a[10][10],baris,kolom;
	cout<<"Masukkan jumlah baris = ";cin>>baris;
	cout<<"Masukkan jumlah kolom = ";cin>>kolom;
	cout<<endl;
	for (int i=0;i<baris;i++){
		for (int j=0;j<kolom;j++){
			cout<<"Inputkan data = ["<<i<<", "<<j<<"] = ";
			cin>>a[i][j];
		}
	}
	
	cout<<"Outputnya==========================="<<endl;
	for (int i=0;i<baris;i++){
		for (int j=0;j<kolom;j++){
			cout<<" "<<a[i][j]<<" ";
		}
		cout<<endl<<endl;

	}
	cout<<"Outputnya==========================="<<endl;
	for (int i=0;i<baris;i++){
		for (int j=0;j<kolom;j++){
			cout<<" "<<a[j][i]<<" ";
		}
		cout<<endl<<endl;
}
}
