/*
 * whilestatement.cpp
 *
 *  Created on: 14 Aug 2016
 *      Author: neilcpaul
 */

#include <iostream>

int main() {
	int sum = 0, val = 1;
	while (val <= 10) {
		sum += val;
		++val;
	}
	std::cout << "Sum of integers in range 1 - 10 is " << sum << std::endl;

	return 0;
}
