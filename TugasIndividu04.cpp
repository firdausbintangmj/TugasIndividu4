#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data :";
    cin >> n;

    int data[n];
    int i = 0;
    int jumGanjil = 0, jumGenap = 0;

    // isi array otomatis dari 0 sampai n-1
    do {
        data[i] = i;
        i++;
    } while (i < n);

    // reset i untuk proses perhitungan
    i = 0;

    // hitung jumlah bilangan ganjil dan genap
    do {
        if (data[i] % 2 == 0)
            jumGenap += data[i];
        else
            jumGanjil += data[i];
        i++;
    } while (i < n);

    // tampilkan hasil
    cout << "Jumlah total bilangan ganjil :" << jumGanjil << endl;
    cout << "Jumlah total bilangan genap  :" << jumGenap << endl;

    return 0;
}