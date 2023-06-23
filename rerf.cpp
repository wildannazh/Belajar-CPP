#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Banyak data : ";
    cin >> n;

    float data[50];
    for (int i = 1; i <= n; i++) {
        cout << "Data ke-" << i << " : ";
        cin >> data[i];
    }
    
    cout<<endl;
    cout << "Tampilan data: " << endl;
    for(int i = 1; i <= n; i++){
    	float pangkat1 = 1;
    	for(int j = 1; j <= 5; j++){
    		pangkat1 *= data[i];
    		cout<<pangkat1<<" ";
		}
		cout<<endl;
	}
	
	//rata2
//	float rata2 = 0;
//	for(int i = 1; i <= n; i++){
//		
//		rata2 += data[i];
//	}
//	rata2 = rata2/n;
//	
//	float pangkat_rata2 = 1;
//	for(int i = 1; i<=5; i++){
//		pangkat_rata2 *= rata2;
//		cout<<pangkat_rata2<<" ";
//	}

    return 0;
}
