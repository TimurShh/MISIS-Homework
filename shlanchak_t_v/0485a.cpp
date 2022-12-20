#include <iostream>
#include <vector>

int main()
{
	std::vector<int> mas(100000,0);
	long long a, m;
	std::cin >> a >> m;
	while (!mas[a % m] && a % m)
	{
		mas[a % m] = 1;

		a += a % m;
	}
	if (a % m == 0) std::cout << "Yes";
	else std::cout << "No";
}
