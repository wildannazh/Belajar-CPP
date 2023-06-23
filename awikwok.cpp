#include <iostream>
using namespace std;
int main() {
    string nama;
    int gajipokok, tunjangan;
    cout<<"Nama = ";cin>>nama;
    cout<<"Gaji Pokok = ";cin>>gajipokok;
    cout<<"Tunjangan = ";cin>>tunjangan;
    cout<<"SLIP GAJI\n===============================\n";
    float gajitotal, asuransi, pajak, gajiterima;
    gajitotal=gajipokok+tunjangan;
    asuransi=0.03*gajitotal;
    pajak=0.05*gajitotal;
    gajiterima=gajitotal-asuransi-pajak;
    cout<<"Nama = "<<nama<<endl;
    cout<<"Gaji Pokok = "<<gajipokok<<endl;
    cout<<"Tunjangan = "<<tunjangan<<endl;
    cout<<"Asuransi = "<<asuransi<<endl;
    cout<<"Pajak = "<<pajak<<endl;
    cout<<"======================================"<<endl;
    cout<<"Gaji terima = "<<gajiterima<<endl;
    cout<<"======================================"<<endl;
    return 0;
}
    

