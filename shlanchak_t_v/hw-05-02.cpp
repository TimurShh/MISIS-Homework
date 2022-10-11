#include <iostream>
#include <cmath>


int main() {
    double a = 0, b = 1, d = 0.05, e = 0.001;
    for (a; a <= b; a += d) {
        double sm = 0, func = 0, r = 0;
        for (int j = 1; j >= 0; j++) {
            r = (std::pow(a, j)) * (std::sin(j * M_PI / 4));
            sm += r;
            func = (a*(std::sin(M_PI/4))) / (1-2*a*(std::cos(M_PI/4)));
            if (std::abs(r) < e) {
                std::cout << a << ' ' << sm << ' ' << func << '\n';
                break;
             }
        }
    }
}
