#include <iostream>

using namespace std;

int main()
{
	//matriks A
	cout<<"matriks A"<<endl;
    
  int mat1[25][25];
  int mat2[25][25];
  int kolom, baris;
  cout<<"masukkan jumlah baris: ";
  cin>>baris;
  cout<<"masukkan jumlah kolom: ";
  cin>>kolom;
  for (int i=1;i<=baris;i++){ //baris
        for (int b=1;b<=kolom;b++){ //kolom
                cout<<"masukkan data baris ke "<<i<<" kolom ke "<<b<<" : ";
                cin>>mat1[i][b];
            }
      }
      
    cout<<endl<<"tampilkan"<<endl<<endl;
    for (int i=1;i<=baris;i++){ //baris
        for (int b=1;b<=kolom;b++){ //kolom   
                cout<<mat1[i][b];
            }
            cout<<endl;
        }
            //matriks B
               cout<<"Matriks B"<<endl;

  
  cout<<"masukkan jumlah baris: ";
  cin>>baris;
  cout<<"masukkan jumlah kolom: ";
  cin>>kolom;
  for (int i=1;i<=baris;i++){ //baris
        for (int b=1;b<=kolom;b++){ //kolom
                cout<<"masukkan data baris ke "<<i<<" kolom ke "<<b<<" : ";
                cin>>mat2[i][b];
            }
      }
      
    cout<<endl<<"tampilkan"<<endl<<endl;
    for (int i=1;i<=baris;i++){ //baris
        for (int b=1;b<=kolom;b++){ //kolom   
                cout<<mat2[i][b];
            }
            cout<<endl;
      }
    int sum;
    cout<<"Perkalian Matriks"<<endl;
    for(int i=0;i<2;i++){
    	for (int j=0;j<2;j++){
    		sum = 0;
    		for (int k=0;k<2;k++){
    			sum = sum + mat1[i][k] * mat2[k][j];
			}
			cout<<sum<<"\t";
        }
        cout<<endl;
		}
		      return 0;

	}
