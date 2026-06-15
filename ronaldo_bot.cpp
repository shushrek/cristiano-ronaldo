#include <iostream>
#include <string>
#include <algorithm>

/* Mengubah string menjadi huruf kecil (setara .casefold()) */
std::string to_lower(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    return str;
}

/* Mengecek apakah needle ada di dalam haystack (setara operator 'in' Python) */
bool contains(const std::string &haystack, const std::string &needle) {
    return haystack.find(needle) != std::string::npos;
}

void cristiano_ronaldo() {
    std::string user;

    std::cout << "Ronaldo: Hello! Welcome to Cristiano Ronaldo Chat Bot" << std::endl;

    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, user);

        /* Ubah ke huruf kecil */
        user = to_lower(user);

        /* ── Pencocokan persis (==) ── */
        if (user == "hello!") {
            std::cout << "Ronaldo: Hello!" << std::endl;

        /* ── Pencocokan substring (in) ── */
        } else if (contains(user, "halo")) {
            std::cout << "Ronaldo: Hello!" << std::endl;

        } else if (contains(user, "helo")) {
            std::cout << "Ronaldo: Hello!" << std::endl;

        } else if (contains(user, "sui!")) {
            std::cout << "Ronaldo: Sui" << std::endl;

        } else if (contains(user, "ronaldo is the goat")) {
            std::cout << "Ronaldo: Absolutely" << std::endl;

        } else if (contains(user, "messi is trash")) {
            std::cout << "Ronaldo: Very trash" << std::endl;

        } else if (contains(user, "messi world cup is corrupted")) {
            std::cout << "Ronaldo: I agree" << std::endl;

        } else if (contains(user, "messi better")) {
            std::cout << "Ronaldo: FUCK YOU" << std::endl;

        } else if (contains(user, "hala madrid")) {
            std::cout << "Ronaldo: \xC2\xA1Hala Madrid!" << std::endl; /* ¡Hala Madrid! */

        /* ── Pencocokan persis untuk exit ── */
        } else if (user == "exit") {
            std::cout << "Ronaldo: Me is better than messi" << std::endl;
            break;

        } else {
            std::cout << "Ronaldo: Sui" << std::endl;
        }
    }
}

int main() {
    cristiano_ronaldo();
    return 0;
}
