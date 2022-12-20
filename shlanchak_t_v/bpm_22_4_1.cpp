#include <iostream>
#include <vector>
#include <cmath>

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    int res = 1;
    for (int i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
}

int main() {
    for (double x = 0.1; x < 1.05; x += 0.05) {
        double eps = 0.0001;
        double sm = 0;
        double d = std::pow(x, 2*0) / (factorial(2*0));
        for (int i = 1; d >= eps; i++) {
            d = std::pow(x, 2*i) / (factorial(2*i));
            sm += d;
        }
        std::cout << x << " " << sm << '\n';
    }
}

