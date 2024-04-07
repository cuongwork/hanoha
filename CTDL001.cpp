#include <iostream>
#include <vector>
#include <string>

// H�m d? quy d? t?o chu?i nh? ph�n
void generateBinaryStrings(int n, std::string current, std::vector<std::string>& result) {
    // N?u d� t?o du?c chu?i nh? ph�n d? n bits, th�m v�o k?t qu?
    if (current.length() == n) {
        result.push_back(current);
        return;
    }

    // Ti?p t?c t?o chu?i nh? ph�n v?i bit ti?p theo l� '0' v� '1'
    generateBinaryStrings(n, current + '0', result);
    generateBinaryStrings(n, current + '1', result);
}

int main() {
    int t;
    std::cin >> t; // S? lu?ng test case

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n; // Nh?p gi� tr? N

        std::vector<std::string> result;
        generateBinaryStrings(n, "", result); // G?i h�m d? t?o chu?i nh? ph�n

        for (const std::string& str : result) {
            for (char c : str) {
                std::cout << c << " ";
            }
            std::cout << "\n";
        }
    }

    return 0;
}
