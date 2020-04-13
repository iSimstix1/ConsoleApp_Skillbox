#include <iostream>
#include <string>

void Even_OR_Uneven_Numbers(const int N) {

	// Event numbers
	if (N % 2 == 0) {
		for (int i = 0; i <= N; i += 2) {
			std::cout << i << " ";
		}
	}
	// Uneven numbers
	else if (N % 1 == 0) {
		for (int i = 1; i <= N; i += 2) {
			std::cout << i << " ";
		}
	}
}

int main() {

	// TASK 1
	const int Number = 20;
	std::cout << "Even numbers: ";
	for (int i = 0; i <= Number; i++) {
		if (i % 2 == 0) {
			std::cout << i++ << " ";
		}
	}

	// TASK 2

	// If const number is even
	std::cout << "\nEven numbers (function: Even_OR_Uneven_Numbers): ";
	Even_OR_Uneven_Numbers(20);
	// If const number is uneven
	std::cout << "\nUneven numbers (function: Even_OR_Uneven_Numbers): ";
	Even_OR_Uneven_Numbers(21);

	std::cout << std::endl;

	return 0;
}
