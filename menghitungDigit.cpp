#include <iostream>

int main() {
    int bilangan;
    std::cout << "Masukkan sebuah bilangan: ";
    std::cin >> bilangan;

    int jumlah_digit = 0;
    int temp = bilangan;

    do {
        int digit = temp % 10;
        jumlah_digit++;
        temp /= 10;
    } while (temp > 0);

    std::cout << "Jumlah digit dari bilangan " << bilangan << " adalah " << jumlah_digit << std::endl;

    return 0;
}