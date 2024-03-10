#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi panjang
double hitungluaspersegipanjang(double panjang, double lebar)
{
    return panjang * lebar;
}

// Fungsi untuk menghitung volume balok
double hitungvolumebalok(double panjang, double lebar, double tinggi)
{
    return panjang * lebar * tinggi;
}

int main()
{
    cout << "===== Menghitung Luas Persegi Panjang dan Volume Balok =====" << endl;

    double panjang, lebar, tinggi;

    cout << "Masukkan panjang persegi panjang : ";
    cin >> panjang;

    cout << "Masukkan lebar persegi panjang : ";
    cin >> lebar;

    cout << "Masukkan tinggi balok : ";
    cin >> tinggi;

    double luas = hitungluaspersegipanjang(panjang, lebar);
    cout << "Luas persegi panjang: " << luas << endl;

    double volume = hitungvolumebalok(panjang, lebar, tinggi);
    cout << "Volume balok: " << volume << endl;

    return 0;
}