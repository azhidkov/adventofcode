#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <cctype>

namespace {
	void partOne() {
		std::vector<int> left;
		std::vector<int> right;

		int l, r;
		while (std::cin >> l >> r) {
			left.push_back(l);
			right.push_back(r);
		}

		std::sort(left.begin(), left.end());
		std::sort(right.begin(), right.end());

		std::size_t distance = 0;
		for (std::size_t i = 0; i != left.size(); ++i) {
			distance += std::abs(left[i] - right[i]);
		}

		std::cout << "distance: " << distance << '\n';
	}

	void partTwo() {
		std::vector<int> left;
		std::map<int, int> right;

		int l, r;
		while (std::cin >> l >> r) {
			left.push_back(l);
			++right[r];
		}

		uint64_t similarity = 0;
		for (const int v : left) {
			const auto it = right.find(v);
			if (it == right.end()) {
				continue;
			}

			similarity += v * it->second;
		}

		std::cout << "similarity: " << similarity << '\n';
}
}

int main() {
	//partOne();
	partTwo();

	return 0;
}
