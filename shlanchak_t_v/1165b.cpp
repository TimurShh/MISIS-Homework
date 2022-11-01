#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> a(n);
    for (int& i : a) {
        std::cin >> i;
    }

    sort(a.begin(), a.end());
    int cnt = 1;
    for(int i = 0;i < n;i++){
		if(a[i] >= cnt) {
            cnt++;
		}
	}
	std::cout<<cnt-1;
}
