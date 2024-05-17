#include <iostream>
using namespace std;

// Deklarasi kelas
class Perpustakaan {
public:
    string nama; 
    int kelas;
    string status;

    // Metode untuk menampilkan informasi
    void nama_anggota() {
        cout << "Nama: " << nama << endl;
        cout << "Kelas: " << kelas << endl;
        cout << "Status: " << status << endl;
    }
};

int main() {
    // Membuat objek dari kelas Manusia
    Perpustakaan anggota;

    // Memberi nilai atribut objek
    anggota.nama = "Abun";
    anggota.kelas = 12;
    anggota.status = "meminjam";

    // Memanggil metode untuk menampilkan informasi
    anggota.nama_anggota();

    return 0;
}