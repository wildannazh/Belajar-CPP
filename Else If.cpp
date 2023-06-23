#include <iostream>
using namespace std;
int main(){
	float nilai;
	cout<< "Masukkan Nilai anda = ";
	cin >> nilai;
	if (nilai<41){
		cout<< "Nilaimu adalah E"<<endl;
	}
	else if (nilai<56){
		cout << "Nilaimu adalah D"<<endl;
	}
	else if (nilai<61){
		cout << "Nilaimu adalah C"<<endl;
	}
	else if (nilai<66){
		cout << "Nilaimu adalah BC"<<endl;
	}
	else if (nilai<76){
		cout << "Nilaimu adalah B"<<endl;
	}
	else if (nilai<86){
		cout << "Nilaimu adalah AB"<<endl;
	}
	else {
		cout << "Nilaimu adalah A"<<endl;
	}
	return 0;
}

