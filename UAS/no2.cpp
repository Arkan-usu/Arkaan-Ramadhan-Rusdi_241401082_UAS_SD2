#include <iostream>
#include <vector>
using namespace std;

struct Pesanan {
    string nama;
    int berat;
    int Jenis;
    int waktuDatang;
};

int main() {
    int waktu;
    int jumlah = 0;
    int n;
    cout << "Masukkan jumlah pesanan: ";
    cin >> n;
    cin.ignore(); // bersihkan newline

    vector<Pesanan> daftarPesanan;

    // Input data pesanan
    for (int i = 0; i < n; i++) {
        Pesanan p;
        cout << "\nPesanan " << i + 1 << ":\n";
        cout << "Nama : ";
        getline(cin, p.nama);
        cout << "Berat: ";
        cin >> p.berat;
        cout << " Jenis layanan (1=Reguler, 2=Express): ";
        cin >> p.Jenis;
        if (p.Jenis == 1)
        {
            waktu = 10 * p.berat;
        }
        else 
        {
            waktu = 5 * p.berat;
        }
        jumlah = jumlah + waktu;
        cin.ignore();
        p.waktuDatang = i; // urutan datang
        daftarPesanan.push_back(p);
    }

    // Urutkan secara manual (bubble sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bool tukar = false;

            // Jika status VIP lebih tinggi, geser ke depan
            if (daftarPesanan[j].Jenis < daftarPesanan[j + 1].Jenis) {
                tukar = true;
            }
            // Jika status sama, bandingkan waktu datang
            else if (daftarPesanan[j].Jenis == daftarPesanan[j + 1].Jenis &&
                     daftarPesanan[j].waktuDatang > daftarPesanan[j + 1].waktuDatang) {
                tukar = true;
            }

            if (tukar) {
                Pesanan temp = daftarPesanan[j];
                daftarPesanan[j] = daftarPesanan[j + 1];
                daftarPesanan[j + 1] = temp;
            }
        }
    }

    // Tampilkan hasil
    cout << "\n=== Urutan Pelayanan ===\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << daftarPesanan[i].nama << " - " << daftarPesanan[i].berat;
        if (daftarPesanan[i].Jenis == 2)
            cout << " [EXPRESS]";
        cout << endl;
    }

    cout << " Total waktu " << jumlah << " Menit "<< endl;

    return 0;
}
