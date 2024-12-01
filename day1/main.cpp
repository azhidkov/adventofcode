#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void part_one();

int main() {
	part_one();

	return 0;
}

void part_one() {
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
