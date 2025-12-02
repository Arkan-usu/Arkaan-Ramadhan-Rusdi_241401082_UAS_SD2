#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

string bersihkan_string(string str) {
    
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}


bool cek_palindrom(string str) {
    string str_balik = str;
    reverse(str_balik.begin(), str_balik.end());
    return (str == str_balik);
}

int main() {
    string input_pengguna;

    cout << "Masukkan sebuah kata atau frasa: ";
    getline(cin, input_pengguna);

    string str_bersih = bersihkan_string(input_pengguna);

    // Memeriksa dan menampilkan hasilnya
    if (cek_palindrom(str_bersih)) {
        cout << "Output: true" << endl;
    } else {
        cout << "Output: false" << endl;
    }

    return 0;
}
