#include <iostream>
#include <vector>
 
int main() {
    int t = 1;
    std::cin >> t;
    while (t--) {
        int n = 0, m = 0, x = 0, y = 0, d = 0;
        int f = 1;
        std::cin >> n >> m >> x >> y >> d;
 
        if (x+d >= n && y+d>=m) f = 0;
        if (x-d <= 1 && y-d<=1) f = 0;
 
        if (x-d <= 1 && x+d>=n) f = 0;
        if (y-d <= 1 && y+d>=m) f = 0;
 
        if (f == 0) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << n+m-2<< std::endl;
        }
    }
}
