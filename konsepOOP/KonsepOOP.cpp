#include <iostream>
#include <string>

class Robot {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;
    std::string mbti;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    Robot (std::string n, int u, std::string m) {
        nama = n;
        umur = u;
        mbti = m;
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
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }

    void setMbti(std::string m) {
        mbti = m;
    }

    std::string getMbti() {
        return mbti;
    } 

    // Metode untuk menampilkan perkenalan diri
    void memperkenalkan_diri() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << ", Mbti: " << mbti << std::endl;
    }
};

int main() {
    Robot r1("Nevpril", 20 ,"ISTJ" );
   
    std::cout << "memperkenalkan_diri:" << std::endl;
    r1.memperkenalkan_diri() ;


    return 0;
}