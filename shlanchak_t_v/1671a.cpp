#include <iostream>
#include <string>
#include <vector>
 
 
int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        int fl = 1;
        if ((s.length() == 1) || (s[0] != s[1]) || (s[s.length()-1] != s[s.length()-2])) { 
            std::cout << "NO" << '\n';
        } else {
            for (int i = 1; i < s.length()-1; i++) {
                if (s[i] != s[i-1] && s[i] != s[i+1])
                    fl = 0;
            }
            fl == 1 ? std::cout << "YES" << '\n' : std::cout << "NO" << '\n';
        }
    }
 
