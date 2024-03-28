#include <iostream>
#include <string>
using namespace std;

struct Pegawai {
    string nama;
    string departemen;
    int gaji;
};

void naikGaji(Pegawai& pegawai) {
    pegawai.gaji += pegawai.gaji * 0.1;
}

int main() {
    Pegawai pegawai1;
    pegawai1.nama = "Budi";
    pegawai1.departemen = "IT";
    pegawai1.gaji = 5000000;

    cout << "Gaji awal pegawai1: " << pegawai1.gaji << endl;

    naikGaji(pegawai1);

    cout << "Gaji setelah dinaikkan: " << pegawai1.gaji << endl;

    return 0;
}