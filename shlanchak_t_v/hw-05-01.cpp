#include <iostream>
#include <cmath>

double factorial(int x) {
    long long res = 1;
    for (int j = 1; j <= x; j++) {
        res *= j;
    }
    return x == 0 ? 1 : res;
}

int main() {
    double a = -1, b = 1, d = 0.1, e = 0.001, func = 0;
    for (a; a <= b; a += d) {
        double sm = 0;
        double r = 0;
        for (int j = 0; j >= 0; j++) {
            r = std::pow(-1, j)* std::pow(a, 2 * j) / (factorial(2 * j));
            sm += r;
            func = std::cos(a);
            if (std::abs(r) < e) {
                std::cout << a << ' ' << sm << func << '\n';
                break;
            }
        }
    }
}
