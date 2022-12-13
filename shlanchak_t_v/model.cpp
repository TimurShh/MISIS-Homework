#include <iostream>
#include <fstream>
#include <cmath>
#include "geom.hpp"
int main() {
    std::ofstream file ("t1.txt");
    if (file.is_open()) {
        file << "n t x y v.x v.y a.x a.y\n";
    }

    Rdec2D r{10, 0};
    Rdec2D v{0, 2};
    double G = 100.0;
    Rdec2D a = - G * r / std::pow(Norm(r), 3);
    double t = 1e0;
    for (int i = 0; i < 100 * 1 / t; i++) {
        v = v - (t * t * a) / 2;
        r = r + v * t;
        a = G * r / std::pow(Norm(r), 3);
        if (file.is_open()) {
            file << i << " " << t * i << " " << r.x << " " << r.y << " " << v.x << " " << v.y << " "<< a.x << " " << a.y << "\n";
        }

    }
    file.close();
    return 0;
}
