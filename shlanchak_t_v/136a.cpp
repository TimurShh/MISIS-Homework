#include <iostream>
#include <map>
#include <vector>
 
int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> a;
    while(n--) {
        int x;
        std::cin >> x;
        a.push_back(x-1);
    }
    std::map<int, int> pr;
    for (int i = 0; i < a.size(); i++) {
        pr[a[i]] = i;
    }
    for (const auto& [key, value] : pr) {
        std::cout << value+1 << ' ';
    }
}
