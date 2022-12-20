#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
int main()
{
    int n = 0, a = 0, result = 0, min1 = 10000000;
    std::vector<int> m;
    std::map<int, int> mp;
    std::cin>>n;

    for(int i = 0; i < n; i++){
        std::cin >> a;
        m.push_back(a);
        mp[a] = i;
    }
    if (n == 1){
        std::cout << m[0];
        return 0;
    }
    result = mp[0];
    for(int i = 0; i < n; i++){
        if(mp[m[i]] < min1){
            result = m[i];
            min1 = mp[m[i]];
        }
    }
    std::cout<< result;
    return 0;
}
