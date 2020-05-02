#include <iostream>
#include <string>
#include <ctime>

int main()
{
	int theCurrentNumberOfCalendar = 2;
	int sumOfArraysInARow = 0;
	bool checkCondition = true;

	const int sizeArray = 4;
	int array[sizeArray][sizeArray] { { } };

	int CheckingTheEquation = theCurrentNumberOfCalendar % sizeArray;
	for (int i = 0; i < sizeArray; i++) {
		for (int j = 0; j < sizeArray; j++) {

			array[i][j] = i + j;
			std::cout << array[i][j] << " ";

			sumOfArraysInARow = array[i][j] + array[i][j];

			if (array[i][j] == CheckingTheEquation) {
				sumOfArraysInARow += array[i][j];
				checkCondition = true;
			}
		}
		if (checkCondition == true) {
			std::cout << "| Amount on line: " << sumOfArraysInARow;
			checkCondition = false;
		}
		std::cout << std::endl;
	}
	return 0;
}