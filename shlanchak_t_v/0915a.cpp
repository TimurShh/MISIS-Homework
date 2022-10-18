#include <iostream>
#include <vector>


int main() {
    int n = 0, k = 0;
    std::cin >> n >> k;
    std::vector<int> m;
    while(n--) {
        int otr;
        std::cin >> otr;
        m.push_back(otr);
    }
    int ms = 1000000; // Лучше сделать через limit
    for (int i = 0; i < m.size(); i++) {
        if (k % m[i] == 0) {
            ms = ms < k/m[i] ? ms : k/m[i];
        }
    }
    std::cout << ms;
}
