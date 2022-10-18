#include <iostream>
#include <vector>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    while(t--) {
        std::string s;
        std::cin >> s;

        int l = 0,r = s.length()-1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                r = i;
                break;
            }
        }
        for (int i = s.length()-1; i >=0; i--) {
            if (s[i] == '1') {
                l = i;
                break;
            }
        }
        std::cout << r-l+1 << '\n';

    }
}
