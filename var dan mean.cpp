#include<iostream>

using namespace std;

		float avr(float x[], int n){
			float sum = 0;
			for(int i=0;i<n;i++){
				sum+=x[i];
//				sum = sum + x[i];
			}
			return(sum/n);
		}
	
	float varians(float x[], float avg, int n){
		float xx = 0;
		
		for(int i=0;i<n;i++){
			xx += ((x[i]-avg)*(x[i]-avg));
		}
		
		int p = n-1;
		
		return(xx/p);
	}

int main(){
	
	int n;
	float sum, avg, x[100], var;
	
	cout<<"=========   Rata-Rata & Varians   =========\n\n";
	cout<<"n = ";
	cin>>n;
	
	cout<<"\n\nMasukkan Bilangan\n";
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	
	avg = avr(x,n);
	var = varians(x, avg, n);
	
	cout<<"\nRata-rata = "<<avg;
	cout<<"\nVarians = "<<var;
}
