#include <iostream>

int main() {
    int tahun;
    std::cout << "Masukkan tahun: ";
    std::cin >> tahun;

    if ((tahun % 4 == 0) && ((tahun % 100 != 0) || (tahun % 400 == 0))) {
        std::cout << tahun << " adalah tahun kabisat." << std::endl;
    } else {
        std::cout << tahun << " bukan tahun kabisat." << std::endl;
    }

    return 0;
}