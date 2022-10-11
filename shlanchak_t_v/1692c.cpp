#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    // RAW / NOT READY YET
    int t = 1;
    // СЛОН -> В СТОЛБЦЕ И СТРОКЕ 1 КРАСНАЯ КЛЕТКА + СПРАВА И СЛЕВА ЕСТЬ КРАСНЫЕ
    while (t--) {
        std::map<int, int> cols;
        std::map<int, int> rows;
        for (int i = 0; i < 8; i++) {
            std::string s1;
            std::cin >> s1;
            for (int j = 0; j < s1.length(); j++) {
                if (s1[j] == '#') {
                    if (cols[j] == 1) {
                        cols[j] += 1;
                    } else {
                        cols[j] = 1;
                    }
                    if (rows[i] == 1) {
                        rows[i] += 1;
                    } else {
                        rows[i] = 1;
                    }
                }
            }
        }
        for (const auto& [kC, vC] : cols) {
            for (const auto& [kR, vR] : rows) {
                if (cols[kC] == 1 && rows[kR] == 1) {
                    std::cout << kC << ' ' << kR;
                    break;
                }
            }
        }
    }
}
