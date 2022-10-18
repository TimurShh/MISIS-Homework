#include <iostream>
#include <vector>


using namespace std;


int main() {
    // RAW / NOT READY YET
    int t = 0;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if (s.length() == 1 || s[0]=='0') {
            cout << 1 << '\n';
        } else {
            int res = 0, fl = 0;
            for (int i = 1; i < s.length(); i++) {
                if (s[i]!=s[i-1]) {
                    fl = 1;
                }
                if (s[i]=='0' && s[i-1]!='0'){
                    res += 2;
                }
            }
            fl == 1 ? cout << res << '\n' : cout << s.length() << '\n';
        }

    }
}
