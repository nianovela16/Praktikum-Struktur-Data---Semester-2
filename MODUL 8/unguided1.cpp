//Nia Novela Ariandini ( 2311102057 )
#include <iostream>
using namespace std;

void selectionSort(string &huruf, int n)
{
    int i, j, min057;
    for (i = 0; i < n - 1; i++)
    {
        min057 = i;
        for (j = i + 1; j < n; j++)
            if (huruf[j] < huruf[min057])
                min057 = j;
        char temp = huruf[i];
        huruf[i] = huruf[min057];
        huruf[min057] = temp;
    }
}

int binarySearch(string Huruf057, int kiri057, int kanan057, char target057)
{
    while (kiri057 <= kanan057)
    {
        int mid = kiri057 + (kanan057 - kiri057) / 2;
        if (Huruf057[mid] == target057)
            return mid;
        if (Huruf057[mid] < target057)
            kiri057 = mid + 1;
        else
            kanan057 = mid - 1;
    }
    return -1;
}

int main()
{
    string kalimat057;
    char input057;
    cout << "====================================" << endl;
    cout << "PROGRAM MENENTUKAN INDEKS PADA HURUF" << endl;
    cout << "====================================" << endl;
    cout << "Masukkan kalimat yang anda inginkan : ";
    getline(cin, kalimat057);
    cout << "Masukkan huruf yang anda ingin cari : ";
    cin >> input057;
    cout << endl;
    selectionSort(kalimat057, kalimat057.size());
    int result = binarySearch(kalimat057, 0, kalimat057.size() - 1, input057);
    if (result == -1)
    {
        cout << "Huruf yang anda cari tidak ditemukan!" << endl;
    }
    else
    {
        cout << "Huruf setelah diurutkan : " << kalimat057 << endl;
        cout << "Huruf ditemukan pada indeks ke- " << result << endl;
    }
    return 0;
}