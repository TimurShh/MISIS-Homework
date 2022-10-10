#include <iostream>
#include <limits>
 
int main() {
    int n = 0, k = 0, x = 0, j = 0, t = 0;
    int joyMax = std::numeric_limits<int>::min();
    std::cin >> n >> k;
    for (int i = 1; i <= n;i++){
        int currJoy = 0;
        std::cin >> x >> t;
        if (t > k) {
            currJoy = x - (t - k);
        } else {
            currJoy = x;
        }
        if (currJoy > joyMax) {
            joyMax = currJoy;
        }
    }
    std::cout << joyMax <<std::endl;
    return 0;
}
