#include <iostream>
 
int main(){
    int x = 0, col = 0, row = 0;
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            std::cin >> x;
            if (x == 1) {
                col = j;
                row = i;
            }
        }
    }
    std::cout << abs(col-2) + abs(row-2) << std::endl;
    return 0;
}
