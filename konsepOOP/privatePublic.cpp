#include <iostream>
#include <string>

class Perpustakaan {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int kelas;
    std::string status;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Perpustakaan (std::string n, int k, std::string s) {
        nama = n;
        kelas = k;
        status = s;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setKelas(int k) {
        kelas = k;
    }

    // Getter untuk mendapatkan umur
    int getKelas() {
        return kelas;
    }

    void setStatus(std::string s) {
        status = s;
    }

    std::string getStatus() {
        return status;
    } 

    // Metode untuk menampilkan perkenalan diri
    void anggota_perpustakaan() {
        std::cout << "Nama: " << nama << ", Kelas: " << kelas << ", Status: " << status << std::endl;
    }
};

int main() {
    Perpustakaan a1("Abun", 12 ,"meminjam" );
   
    std::cout << "anggota_perpustakaan:" << std::endl;
    a1.anggota_perpustakaan() ;

std::cout << "status:" << a1.getStatus();

    return 0;
}