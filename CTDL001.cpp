#include <iostream>
#include <vector>
#include <string>

// Hàm d? quy d? t?o chu?i nh? phân
void generateBinaryStrings(int n, std::string current, std::vector<std::string>& result) {
    // N?u dã t?o du?c chu?i nh? phân d? n bits, thêm vào k?t qu?
    if (current.length() == n) {
        result.push_back(current);
        return;
    }

    // Ti?p t?c t?o chu?i nh? phân v?i bit ti?p theo là '0' và '1'
    generateBinaryStrings(n, current + '0', result);
    generateBinaryStrings(n, current + '1', result);
}

int main() {
    int t;
    std::cin >> t; // S? lu?ng test case

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n; // Nh?p giá tr? N

        std::vector<std::string> result;
        generateBinaryStrings(n, "", result); // G?i hàm d? t?o chu?i nh? phân

        for (const std::string& str : result) {
            for (char c : str) {
                std::cout << c << " ";
            }
            std::cout << "\n";
        }
    }

    return 0;
}
