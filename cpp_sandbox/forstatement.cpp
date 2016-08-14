/*
 * forstatement.cpp
 *
 *  Created on: 14 Aug 2016
 *      Author: neilcpaul
 */

#include <iostream>

int main() {
	int sum = 0;
	for (int i = 0; i <= 10 ; i++) {
		sum += i;
	}
	std::cout << "Sum of integers in range 1 - 10 is " << sum << std::endl;

	return 0;
}
