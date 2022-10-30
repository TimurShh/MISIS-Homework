#include <iostream>
#include <vector>

int main() {
    // НЕПРАВИЛЬНЫЙ ОТВЕТ ТЕСТ 2
    int t = 0;
    std::cin >> t;
    while(t--) {
        int n = 0;
        std::cin >> n;
        std::vector<int> a(n);
        for(int& i: a) {
            std::cin >> i;
        }
        int res = 0;
        int fl = 1;
        for (int i = 0; i < a.size(); i++) {
            if (a[i+1] == 0) {
                for (int j = i + 1; j < a.size(); j++) {
                    if (a[j] == 1) {
                        res += j - i;
                        fl++;
                        break;
                    }
                }
            }
        }
        fl <= 2 ? std::cout<<res<<'\n' : std::cout << a.size()-1 << '\n';
    }
}
