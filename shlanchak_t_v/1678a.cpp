#include <iostream>
#include <vector>
int main() {
    // NOT READY YET
    int t = 0;
    std::cin >> t;
    while(t--) {
        int n = 0;
        std::cin >> n;
        std::vector<int> a(n);
        for(int& i : a) {
            std::cin >> i;
        }
        int res = 0;
        int lIndex = 0;
        int fl = 1;
        while (fl > 0) {
            if ((a[lIndex] != 0) || (a[lIndex+1] != 0)) {
                if (a[lIndex] == a[lIndex+1]) {
                    a[lIndex] = 0;
                } else {
                    int mn = std::min(a[lIndex], a[lIndex+1]);
                    a[lIndex] = mn;
                    a[lIndex+1] = mn;
                }
            }
            else {
                lIndex += 1;
            }
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == 1) {
                    fl = 1;
                }
            }
            res++;
            fl == 1 ? fl = 1 : fl = 0;

        }

        std::cout << res << '\n';
    }
}
