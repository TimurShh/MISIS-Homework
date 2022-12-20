#include <iostream>
#include <vector>
 
int main() {
    long long n, k;
    std::cin >> n >> k;
    std::vector<int> a;
    int max1 = -1;
    for (int i = 0; i < n; i++) {
        int x = 0;
        std::cin>>x;
        a.push_back(x);
        max1 < x ? max1 = x : max1*=1;
    }
    if (k >= n) {
        std::cout << max1;
    } else {
        int winSeq = 0;
        int lastWinner = a[0];
        for (int i = 1; i < n; i++) {
            if (lastWinner > a[i]) {
                winSeq++;
            } else {
                lastWinner = a[i];
                winSeq = 1;
            }
            if (winSeq == k) {
                break;
            }
        }
        std::cout << lastWinner;
    }
}
