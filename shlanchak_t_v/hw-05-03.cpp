#include <iostream>
#include <cmath>

double factorial(int x) {
    double res = 1;
    for (int j = 1; j <= x; j++) {
        res *= j;
    }
    return x == 0? 1 : res;
}

int main() {
    double a = 0, b = 1, d = 0.1, e = 0.0001;
    for (a; a <= b; a += d) {
        double sm = 0, func  = 0, r = 0;;
        for (int i = 0; i >= 0; i++) {
            r = (std::pow(2*a, i)) / (factorial(i));
            sm += r;
            func = std::pow(M_E, 2*a);
            if (std::abs(r) < e) {
                std::cout << a << ' ' << sm << ' ' << func << '\n';
                break;
            }
        }
    }
}
