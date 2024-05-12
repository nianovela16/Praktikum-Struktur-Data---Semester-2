#include <iostream>

using namespace std;

const int maksimalAntrian = 5;
int front = 0;
int back = 0;
string queueTeller[5];

bool isFull(){
    if (back  == maksimalAntrian) {
        return true;
    } else {
        return false;
    }
}

//mengecek antrian apakah masih kosong
bool ifEmpty(){
    if(back == 0) {
        return true;
    } else {
        return false;
    }
}

//menambah antrian
void tambahData (string nama) {
    if (isFull()) {

    }
}
