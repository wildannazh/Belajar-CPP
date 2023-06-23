#include <iostream>
using namespace std;
int main(){
	int n, i, nilai[999];
	cout<<"Masukkan berapa data = ";cin>>n;
	for (i=1;i<=n;i++){
		cout<<"Data ke-"<<i<<" = ";cin>>nilai[i];
	}
	cout<<"=================Mengurutkan data=================="<<endl;
	for (i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			if (nilai[j]<nilai[i]){
				float temp = nilai[i];
				nilai[i]=nilai[j];
				nilai[j]=temp;
			}
		}
	}
	
	for (i=1;i<=n;i++){
		cout<<" "<<nilai[i];
	}
	cout<<"================Rata-rata=============="<<endl;
	float rata2 = 0;
	for (i=1;i<=n;i++){
		rata2+=nilai[i];
	}
		rata2=rata2/n;
		cout<<"Rata-ratanya = "<<rata2;
	return 0;
	
}
