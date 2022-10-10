#include <iostream>
#include <vector>
 
 
int main() {
    int t = 0;
    std::cin>>t;
    for (int i = 0; i < t; i++) {
        int n = 0;
        std::cin>>n;
        std::vector<int> a;
        int p = 1;
        while (n) {
            if (n%10) {
                a.push_back(n%10*p);
            }
            n /= 10;
            p *= 10;
        }
        std::cout << a.size() << '\n';
        for (int i = 0; i < a.size(); i++){
            std::cout << a[i] << ' ';
        }
        std::cout << '\n';
    }
 
}
