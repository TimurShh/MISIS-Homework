#include <bits/stdc++.h>
// RAW FILE / NOT READY YET
int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        string s;
        std::cin >> s;
        int k = 0;
        std::cin >> k;
        map<char,int> a;
        while(k--) {
            char x;
            std::cin >> x;
            if (a[x] != 1) {
                a[x] = 1;
            }
        }
        vector<char> letters;
        for (auto const& [key, val] : a) {
            letters.push_back(key);
        }
        // Break the loop when 1 special letter left and no letters before it
        for (int i = 0; i < s.length()-1; i++) {
            if (a[s[i+1]] == 1) {
                s = s.substr(0, i) + s.substr(i+1, s.length());
                cnt += 1;
                std::cout << s << '\n';
            }
        }
    }
}
