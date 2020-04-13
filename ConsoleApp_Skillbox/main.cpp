#include <iostream>
#include <string>

void Even_OR_Uneven_Numbers(const int N) 
{
	// Event numbers with use one loop;
	for (int i = 0; i <= N; i++)
	{
		// Event numbers;
		if (N % 2 == 0) 
		{
				std::cout << i << " ";
				i++;
		}
		// Unevent numbers;
		else if (N % 1 == 0) 
		{
				i += 1;
				std::cout << i << " ";
		}
	}
}

int main() 
{
	// Decision 1;
	std::cout << "Decision 1: " << std::endl;
	const int Number = 20;
	std::cout << "Even numbers: ";
	for (int i = 0; i <= Number; i++) 
	{
		if (i % 2 == 0) 
		{
			std::cout << i++ << " ";
		}
	}

	// Decision 2;
	std::cout << "\n\nDecision 2: " << std::endl;
	// If const number is even
	std::cout << "Even numbers (function: Even_OR_Uneven_Numbers): ";
	Even_OR_Uneven_Numbers(16);
	// If const number is uneven
	std::cout << "\nUneven numbers (function: Even_OR_Uneven_Numbers): ";
	Even_OR_Uneven_Numbers(17);

	std::cout << std::endl;

	return 0;
}
