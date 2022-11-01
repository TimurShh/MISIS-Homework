#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    int n = 0, k = 0;
    std::cin >> n >> k;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        a.push_back(x);
    }
    int cnt = 0;
    int lIndex = 0, nIndex = 1;;
    if (k+1 > a.size()) {
        int mx = *std::max_element(std::begin(a), std::end(a));
        std::cout << mx;
        return 0;
    }
    while (cnt < k) {
        if (a[lIndex] > a[nIndex]) {
            cnt++;
            nIndex++;
        } else {
            cnt = 0;
            a.push_back(a[lIndex]);
            lIndex++;
            nIndex = lIndex + 1;
        }
    }
    std::cout << a[lIndex];
}
