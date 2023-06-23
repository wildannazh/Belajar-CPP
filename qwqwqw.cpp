#include<iostream>

using namespace std;

int main(){
////	Nomer 1
/*	int A[25][25] = {{1,2,3},{4,5,6}},
	B[25][25] = {{1,2,3},{4,5,6},{7,8,9}}, c[25][25];*/
//	int A[100][100],B[100][100],c[100][100],baris1,kolom1,baris2,kolom2;
//	
//
//	cout<<"\nJumlah baris Matriks 1 : ";
//	cin>>baris1;
//	cout<<"Jumlah kolom Matriks 1 : ";
//	cin>>kolom1;
//
//
//	cout<<"\nJumlah baris Matriks 2 : ";
//	cin>>baris2;
//	cout<<"Jumlah kolom Matriks 2 : ";
//	cin>>kolom2;
//
//	
//	if(kolom1==baris2){
//	cout<<"\nMatriks A\n";
//	for(int i=0;i<baris1;i++){
//		for(int j=0;j<kolom1;j++){
//			cout<<"Baris ke-"<<i+1<<" kolom ke-"<<j+1<<" : ";
//			cin>>A[i][j];
//		}
//	}
//	for(int i=0;i<baris1;i++){
//		for(int j=0;j<kolom1;j++){
//			cout<<A[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	cout<<"\nMatriks B\n";
//	for(int i=0;i<baris2;i++){
//		for(int j=0;j<kolom2;j++){
//			cout<<"Baris ke-"<<i+1<<" kolom ke-"<<j+1<<" : ";
//			cin>>B[i][j];
//		}
//	}
//	for(int i=0;i<baris2;i++){
//		for(int j=0;j<kolom2;j++){
//			cout<<B[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
////	(AB)
//	cout<<endl;
//	for(int i=0;i<baris1;i++){
//		for(int j=0;j<kolom2;j++){
//			c[i][j]=0;
//			for(int k=0;k<baris2;k++){
//				c[i][j] += A[i][k]*B[k][j];
//			}
//		}
//	}
//	
///*	for(int i=0;i<2;i++){
//		for(int j=0;j<3;j++){
//			cout<<c[i][j]<<" ";
//		}
//		cout<<endl;
//	}*/
//	
////	(AB)'
//	int d[25][25];
//	cout<<endl;
//	for(int i=0;i<kolom2;i++){
//		for(int j=0;j<baris1;j++){
//			d[i][j] = c[j][i];
//			cout<<d[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
////	A'
//	int a[25][25];
//	cout<<endl<<"Matriks A Tranpose\n";
//	for(int i=0;i<kolom1;i++){
//		for(int j=0;j<baris1;j++){
//			a[i][j] = A[j][i];
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
////	B'
//	int b[25][25];
//	cout<<endl<<"Matriks B Tranpose\n";
//	for(int i=0;i<kolom2;i++){
//		for(int j=0;j<baris2;j++){
//			b[i][j] = B[j][i];
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
////	B'A'
//	int e[25][25];
//	cout<<endl<<"Hasil B'A'\n";
//	for(int i=0;i<kolom2;i++){
//		for(int j=0;j<baris1;j++){
//			e[i][j]=0;
//			for(int k=0;k<baris2;k++){
//				e[i][j] += b[i][k]*a[k][j];
//			}
//		}
//	}
//	
//	for(int i=0;i<kolom2;i++){
//		for(int j=0;j<baris1;j++){
//			cout<<e[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//	cout<<"\nPembuktian (AB)' = B'A'\n";
//	cout<<"Jika semua elemen sama maka terbukti\n";
//	for(int i=0;i<kolom2;i++){
//		for(int j=0;j<baris1;j++){
//			if(d[i][j]==e[i][j]){
//				cout<<"sama"<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	}
//	
	
	
//	Nomer 2
//	int n,x[25],m[25];
	int n = 5,x[25] = {23,35,14,18,31},
	m[25] = {23,35,14,18,31}; //Hanya untuk coba-coba
	float y[25][25],k[25][25];
	
//	cout<<"\nBanyak data : ";
//	cin>>n;
//	
//	for(int i=0;i<n;i++){
//		cout<<"Data ke-"<<i+1<<" : ";
//		cin>>x[i];
//		x[i] = m[i];
//	}
	
	for(int i=0;i<n;i++){
		cout<<x[i]<<endl;
	}
	
	cout<<"\nTampilan data : \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				y[i][j] = x[i];
			}else{
				y[i][j] = x[i]*m[i];
				x[i] = y[i][j];	
			}
		}
	}
//	for(int j=0;j<n;j++){
//		for(int i=0;i<=n;i++){
//			k[i][j] += y[i][j];
//		}
//	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<y[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl<<y[0][4];
}
