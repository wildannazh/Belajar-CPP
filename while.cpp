#include<iostream>
using namespace std;
//==============PEMOGRAMAN ANGKA 1 SAMPAI 10======================
//main(){
//	int i=1;
//	while (i<=10){
//		cout<<i<<" ";
//		i++;
//	}
//}

//==============PEMOGRAMAN ANGKA 10 SAMPAI 1======================
//main(){
//	int i=10;
//	while (i>=1){
//		cout<<i<<" ";
//		i--;
//	}
//}

//==============PEMOGRAMAN HURUF A SAMPAI J======================
//main(){
//	char z;
//	z='a';
//	while(z<='j'){
//		cout<<z<<" ";
//		z++;
//	}
//}

//==============PEMOGRAMAN HURUF J SAMPAI A======================
//main(){
//	char i='j';
//	while(i>='a'){
//		cout<<i<<" ";
//		i--;
//	}
//}

//==============PEMOGRAMAN GANJIL 1-100======================
//main(){
//	int i=1;
//	while(i<=100){
//		if(i%2==1){
//			cout<<i<<" ";
//		}
//		i++;
//	}	
//}

//==============PEMOGRAMAN GENAP 1-100======================
//main(){
//	int i=1;
//	while(i<=100){
//		if(i%2==0){
//			cout<<i<<" ";
//		}
//		i++;
//	}	
//}

//==============PEMOGRAMAN GENAP 1-100======================
//main(){
//	int i=1;
//	while(i<=50){
//		cout<<i*2<<" ";
//		i++;
//	}	
//}

//==============PEMOGRAMAN GANJIL 1-100======================
//main(){
//	int i=0;
//	while(i<=49){
//		cout<<i*2+1<<" ";
//		i++;
//	}	
//}

//==============PEMOGRAMAN FIBONACCI======================
//main(){
//	int a,b,c,i;
//	a=0;
//	b=1;
//	for(i=1;i<=10;i++){
//		c=a+b;
//		b=a;
//		a=c;
//		cout<<c<<" ";
//	}
//}

//==============PEMOGRAMAN ABDUL======================
//int main(){
//    int n = 18; 
//    int deret[n]; 
//    deret[0] = 1; 
//    deret[1] = 1; 
//    for(int i = 2; i < n; i++){
//        deret[i] = deret[i-1] + deret[i-2]; 
//    }
//	for(int i = 0; i < n; i++){
//        cout << deret[i] << " ";
//    }
//}

//==============PEMOGRAMAN DERET ARITMATIKA======================
//main(){
//	int sum=0;
//	int i;
//	for(i=1;i<=20;i++){
//		sum+=i;
//	}
//	cout<<sum<<" ";
//}

//==============PEMOGRAMAN FAKTORIAL======================
//main(){
//	int sum=1;
//	int i;
//	for(i=1;i<=5;i++){
//		sum*=i;
//	}
//	cout<<sum<<" ";
//}

//==============PEMOGRAMAN KOMBINASI======================
//int main(){
//	
//	cout<<"---- Kombinasi ----"<<endl;
//	cout<<" C(n, r) = n!/(r! (n - r)!) "<<endl;
//	int n,r;
//	cout<<"Masukkan n: ";cin>>n;
//	cout<<"Masukkan r: ";cin>>r;
//	int a = 1;
//	int i = 1;
//	do {
//		a *= i;
//		i++;
//	} while(i<=n);
//	int b = 1;
//    int j = 1;
//	do {
//		b *= j;
//		j++;
//	} while(j<=r);
//	int n_r = 1;
//	int d = n-r;
//    int k = 1;
//	do {
//		n_r *= k;
//		k++;
//	} while(k<=d);
//	
//	float comb;
//	comb = a/(b*n_r);
//	cout<<"Kombinasi dari "<<n<<" dan "<<r<<" "<<"="<<" "<<comb;
//}


//==============PEMOGRAMAN FIBONACCI DO WHILE======================
int main(){
    int a, b, c, i;
    a = 0;
    b = 1;
    i = 1;
    do {
        c = a + b;
        b = a;
        a = c;
        cout << c << " ";
        i++;
    } while (i <= 10);
    return 0;
}




