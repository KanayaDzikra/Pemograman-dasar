#include <iostream>
#include <string>

std::string hitungTurunan(const std::string& rumus_kecepatan) {
    std::string turunan = "";

    if (rumus_kecepatan == "v = s/t") {
        turunan = "1/t";
    } else if (rumus_kecepatan == "v = s/t + at") {
        turunan = "1/t + a";
    } else if (rumus_kecepatan == "v = u + at") {
        turunan = "a";
    } else if (rumus_kecepatan == "v = u + at + 0.5*a*t^2") {
        turunan = "a + 0.5*a*t";
    }
    
    return turunan;
}

std::string choices(const std::string& choice){
    std::string pilih = "";
    if (choice == "1"){
        pilih = "v = s/t";
    }else if (choice == "2"){
        pilih = "v = s/t + at";
    }else if (choice == "3"){
        pilih = "v = u + at";
    }else if (choice == "4"){
        pilih = "v = u + at + 0.5*a*t^2";
    }
    return pilih;
}

int main() {
    std::cout << "1. v = s/t\n"
                 "2. v = s/t + at\n"
                 "3. v = u + at\n"
                 "4. v = u + at + 0.5*a*t^2\n";
    std::string pilih;
    std::cout << "masukkan rumus: ";
    std::getline(std::cin, pilih);

    std::string rumus_kecepatan = choices(pilih);
    std::string turunan = hitungTurunan(rumus_kecepatan);
    std::cout << "Turunan dari rumus kecepatan adalah: " << turunan << std::endl;

    return 0;
}