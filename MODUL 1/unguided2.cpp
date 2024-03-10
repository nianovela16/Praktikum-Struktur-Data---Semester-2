#include <iostream>
#include <string>
using namespace std;

// Struct untuk merepresentasikan informasi alat tulis
struct AlatTulis {
    string nama;
    int harga;
    int stok;
};

// Class untuk merepresentasikan jasa di toko alat tulis
class Jasa {
private:
    string nama;
    int waktu;
    int harga;

public:
    // Konstruktor untuk inisialisasi objek Jasa
    Jasa(string namaJasa, int waktuJasa, int hargaJasa) : nama(namaJasa), waktu(waktuJasa), harga(hargaJasa) {}

    // Method untuk menampilkan informasi jasa
    void tampilkanInfo() {
        cout << "\nNama Jasa   : " << nama << endl;
        cout << "Durasi jasa : " << waktu << " menit" << endl;
        cout << "Harga       : Rp. " << harga << endl << endl;
    }
};

int main()
{
    cout << "\n===== Penggunaan Struct dan Class Toko Alat Tulis =====" << endl;
    // Contoh Penggunaan Struct untuk Alat Tulis
    AlatTulis pensil, kertas;

    pensil.nama = "Pensil 2B";
    pensil.harga = 2000;
    pensil.stok = 50;

    kertas.nama = "Kertas A4";
    kertas.harga = 5000;
    kertas.stok = 100;

    cout << "\nNama Alat Tulis : " << pensil.nama << endl
              << "Harga           : Rp." << pensil.harga << endl
              << "Stok            : " << pensil.stok << endl;

    cout << "\nNama Alat Tulis : " << kertas.nama << endl
              << "Harga           : Rp." << kertas.harga << endl
              << "Stok            : " << kertas.stok << endl;

    // Contoh Penggunaan Class untuk Jasa
    Jasa pengiriman("Pengiriman Barang", 45, 25000);
    Jasa laminasi("Laminasi Dokumen", 15, 10000);
    pengiriman.tampilkanInfo();
    laminasi.tampilkanInfo();

    return 0;
}
