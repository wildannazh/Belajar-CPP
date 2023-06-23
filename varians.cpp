#include<iostream>
using namespace std;
main(){
	int i,j,x[10]={2,5,4,8,1,3,7,1,10,6}, k=0;
	for (i=0;i<=9;i++){
		for (j=i;j<=9;j++){
			if(x[i]>=x[j]){
				k=x[i];
				x[i]=x[j];
				x[j]=k;
			}
		}
	}
}
