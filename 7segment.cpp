/*Nadya Kezia Goergina Shallom Toban - D121241002*/

#include <iostream>
using namespace std;

// Fungsi untuk menampilkan angka pada display 7-segment
void tampilkan7Segmen(int angka) {
    // Array untuk menyimpan representasi 7-segment dari angka 0-9
    const char* segmen[10] = {
        " _ \n| |\n|_|", // 0
        "   \n  |\n  |", // 1
        " _ \n _|\n|_ ", // 2
        " _ \n _|\n _|", // 3
        "   \n|_|\n  |", // 4
        " _ \n|_ \n _|", // 5
        " _ \n|_ \n|_|", // 6
        " _ \n  |\n  |", // 7
        " _ \n|_|\n|_|", // 8
        " _ \n|_|\n _|", // 9
    };

    // Array untuk menyimpan representasi biner dari setiap segmen (a-g) untuk angka 0-9
    const char* binerSegmen[10] = {
        "1111110", // 0
        "0110000", // 1
        "1101101", // 2
        "1111001", // 3
        "0110011", // 4
        "1011011", // 5
        "1011111", // 6
        "1110000", // 7
        "1111111", // 8
        "1111011", // 9
    };

    // Array untuk menyimpan representasi biner dari angka 0-9
    const char* binerAngka[10] = {
        "0000", // 0
        "0001", // 1
        "0010", // 2
        "0011", // 3
        "0100", // 4
        "0101", // 5
        "0110", // 6
        "0111", // 7
        "1000", // 8
        "1001", // 9
    };

    if (angka >= 0 && angka <= 9) {
        cout << "Display 7-Segment:\n" << segmen[angka] << endl;
        cout << "Representasi biner dari angka " << angka << ": " << binerAngka[angka] << endl;
        cout << "Representasi biner segmen (A-G) untuk angka " << angka << ": " << binerSegmen[angka] << endl;
    } else {
        cout << "Angka tidak valid!" << endl;
    }
}

int main() {
    int angka;
    cout << "Masukkan angka (0-9): ";
    cin >> angka;
    tampilkan7Segmen(angka);
    return 0;
}