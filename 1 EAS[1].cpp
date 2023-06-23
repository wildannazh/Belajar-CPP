#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	
	double eigenV[3] = {9, 9, 18};
	double e[3][3] = 
	{
		{1/sqrt(2), 1/sqrt(18), 2.00/3.00},
		{1/sqrt(2), -1/sqrt(18), -2.00/3.00},
		{0, -4/sqrt(18), 1.00/3.00}
	};
	//tranpose
	double e_tranpose[3][3] = {0};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			e_tranpose[i][j] = e[j][i];
		}
	}
	
	//perkalian	
	double hasil[3][3] = {0};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 3; k++){
				hasil[j][k] = hasil[j][k] + eigenV[i] * e[j][i] * e_tranpose[i][k];
			}
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << hasil[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
