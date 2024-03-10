#include <iostream>
#include <map> // Library supaya bisa menggunakan fungsi map dibawah


using namespace std;

int main() {

    // Deklarasi map dengan key int dan value string
    map<int, string> kopi_1611;

    // Menambahkan elemen-elemen ke dalam map
    kopi_1611[1] = "Gula Aren";
    kopi_1611[2] = "Caramel Machiato";
    kopi_1611[3] = "Moccahino";
    kopi_1611[4] = "Kopi Tubruk";
    kopi_1611[5] = "Americano";

    cout << "===== Selamat Datang di Kopi Tuku! =====" << endl;
    for (int i = 1; i <= kopi_1611.size(); ++i) { // Looping untuk menampilkan semua elemen map
        cout << "No." << i << " " << kopi_1611[i] << endl; // Menampilkan elemen map
    }

    return 0;
}