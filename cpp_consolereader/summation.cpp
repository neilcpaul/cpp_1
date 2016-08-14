// np
// Simple console reader which performs summation
// 20160814

#include <iostream>

int main() {
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2, lower, upper, sum = 0;
	std::cin >> v1 >> v2;

	if (v1 > v2) {
		lower = v2;
		upper = v1;
	} else {
		lower = v1;
		upper = v2;
	}

	for (int i = lower; i <= upper; i++) {
		sum += i;
	}

	std::cout << "The sum of numbers between " << v1 << " and " << v2
			  << " is " << sum << std::endl;

	return 0;
}
