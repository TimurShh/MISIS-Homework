#include <iostream>
#include <vector>
 
int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, x = 0;
        std::cin >> n >> x;
        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            int q = 0;
            std::cin >> q;
            a.push_back(q);
        }
        int ans = 0;
        for (int i = 0;; i++) {
            int f = 0;
            for (int j = 0; j < a.size(); j++) {
                if (a[j] == i) {
                    f = 1;
                }
            }
            if (f == 0) {
                x -= 1;
            }
            if (x < 0) {
                ans = i - 1;
                break;
            }
        }
 
        std::cout << ans << '\n';
    }
}
