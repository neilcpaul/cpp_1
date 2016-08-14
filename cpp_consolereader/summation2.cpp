// np
// Simple console reader which performs summation
// 20160814

#include <iostream>

int main() {
	std::cout << "Enter some numbers followed by 'end':" << std::endl;
	int sum = 0, value;

	while (std::cin >> value) {
		sum += value;
	}

	std::cout << "The sum is " << sum << std::endl;

	return 0;
}
