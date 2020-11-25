#include <iostream>
#include <set>
#include <utility>

int main()
{
	std::set<std::pair<std::string, int>> set = {
		{"A", 4}, {"B", 4}, {"C", 1}, {"A", 0}, {"B", 3}
	};

	for (auto const &p: set) {
		std::cout << p.first << " " << p.second << '\n';
	}

	return 0;
}
