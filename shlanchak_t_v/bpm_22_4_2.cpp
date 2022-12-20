#include <iostream>
#include <vector>
#include <cmath>
int main() {
    double x = 0, y = 0;
    while(std::cin >> x >> y) {
        // Случай 1 - точки НЕ находятся на окружности
        if ((x*x +y*y)>1) {
            std::cout << "Point not in the circle" << '\n';
        } else {
            // Теперь рассматриваем случаи НА окружности
            // Случай 2 - точка на прямой y = x + 1 или на прямой y = x - 1
            if (((y==x+1) || (y==x-1))){
                std::cout << "IN AREA" << '\n';
            }
            // Случай 3 - точка СТРОГО под прямой y = x + 1 и СТРОГО над прямой y = x - 1
            else if ((y<x+1) && (y > x + 1)) {
                std::cout << "NOT IN AREA " << '\n';
            } else {
                std::cout << "IN AREA" << '\n';
            }
        }
    }
}
