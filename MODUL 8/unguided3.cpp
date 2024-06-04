//Nia Novela Ariandini ( 2311102057 )
#include <iostream>
using namespace std;

int HitungAngka057( const int array[], int size057, int target057) {
    int count = 0;

    for (int i = 0; i < size057; i++) {
        if (array[i] == target057) {
            count++;
        }
    }

    return count;
}

int main() {
    const int size057 = 10;
    int array[size057] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target057 = 4;

    int count = HitungAngka057(array, size057, target057);

    cout << "=======================================" << endl;
    cout << "========MENGHITUNG ANGKA TARGET========" << endl;
    cout << "=======================================" << endl;
    cout << "Jumlah angka " << target057 <<  endl; 
    cout << "Ditemukan dalam data sebanyak : " << count << endl;

    return 0;
}