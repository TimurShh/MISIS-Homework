#include <iostream>
#include <vector>
#include <bitset>

int main() {
    int x = 0;
    std::cin >> x;
    int r = 0;
    for (;x;x>>=1) {
        r += x & 1;
    }
    std::cout << r;
}
