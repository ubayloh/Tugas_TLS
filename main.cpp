//Program Kalkulator Laundry Kiloan

#include <iostream>
using namespace std;

int main ()
{
//Judul
    cout << "====================================" << endl;
    cout << "Program Kalkulator Laundry Kiloan" << endl;
    cout << "====================================" << endl;
    cout << "Tarif laundry per Kg : Rp5000 " << endl;
    cout << "Estimasi waktu 1-3 hari " << endl;
    
//Data pemesan dan pesanan
    char nama [5], no_hp [15];
    float berat_laundry {0};
    
    cout << "\nData Pemesan" << endl;
    cout << "------------------------------------" << endl;
    cout << "Masukan nama : "; cin >> nama;
    cout << "Masukan nomor HP : "; cin >> no_hp;
    cout << "Berat laundry (Kg) : "; cin >> berat_laundry;
    
//Detail pesanan
    const int tarif_per_kilo {5000};
    double tarif {berat_laundry*tarif_per_kilo};
    
    cout << "\nDetail Pesanan" << endl;
    cout << "------------------------------------" << endl;
    cout << "Nama pemesan : " << nama;
    cout << "\nNomor HP : " << no_hp;
    cout << "\nBerat laundry : " << berat_laundry << " Kg" << endl; 
    cout << "Total tarif laundry : Rp" << tarif;
    cout << "\nEstimasi waktu :";
    
    if (berat_laundry < 3 ) {
        cout << "Estimasi waktu 1 hari " << endl;
    }
    else if (berat_laundry >=  3 && berat_laundry <= 5) {
        cout << "Estimasi waktu 2 hari " << endl;
    }
    else if (berat_laundry > 5) {
        cout << "Estimasi waktu 3 hari " << endl;
    }
    
//Pembayaran
    int uang_bayar {0};
    cout << "\nPembayaran" << endl;
    cout << "------------------------------------" << endl;
    cout << "Bayar : Rp"; cin >> uang_bayar;
    
    double uang_kembalian {uang_bayar-tarif};
    cout << "Kembalian : Rp" << uang_kembalian;

//Terimakasih
    cout << "\n\n====================================" << endl;
    cout << "Terimkasih" << endl;
    cout << "====================================" << endl;

    return 0;
}
