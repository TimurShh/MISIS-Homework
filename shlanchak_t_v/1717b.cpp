#include <iostream>
#include <vector>
 
int main()
{
    int t = 0;
    std::cin >> t;
    while (t--){
        int n = 0, k = 0 , r = 0, c = 0;
        std::cin >> n;
        std::cin >> k;
        std::cin >> r;
        std::cin >> c;
        r -= 1;
        c -= 1;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < n; j ++){
                if (((i + j - c - r) % n) % k == 0){
                    std::cout << "X";
                }
                else{
                    std::cout << ".";
                }
            }
            std::cout << '\n';
        }
    }
}
