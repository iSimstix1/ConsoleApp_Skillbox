#include <iostream>
#include <string>

void Even_OR_Uneven_Numbers(const int N)
{
	bool b = true;
	int i = 1; // Changes depending on the condition

	std::cout << "Enter your option: ";
	std::cin >> b;

	if (b) {
		i = 0; 
}
	else if (!(b)) {
		i;
	}

	for (; i <= N; i += 2) { std::cout << i << std::endl; }
}

int main() 
{
	const int Number = 20;

	// Decision 1;
	std::cout << "Decision 1: " << std::endl;
	std::cout << "Even numbers: ";
	for (int i = 0; i <= Number; i += 2) { std::cout << i << " "; }

	// Decision 2;
	std::cout << "\n\nDecision 2: " << std::endl;
	
	std::cout << "Even = 1 | Uneven = 0" << std::endl;
	Even_OR_Uneven_Numbers(20);

	std::cout << std::endl;

	return 0;
}