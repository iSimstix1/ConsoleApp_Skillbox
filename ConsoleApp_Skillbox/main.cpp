#include <iostream>
#include <string>
#include <ctime>

int main()
{

	int theCurrentNumberOfCalendar = 28;
	int sumOfArraysInARow = 0;
	bool checkCondition = true;

	const int sizeArray = 3;

	int array[sizeArray][sizeArray]= {
		{  1, 2, 3 }, 
		{  4, 5, 6 },
		{  7, 8, 9 }
	};

	for (int i = 0; i < sizeArray; i++) {
		for (int j = 0; j < sizeArray; j++) {

			array[i][j] = i + j;
			std::cout << array[i][j] << " ";

			int tmp = theCurrentNumberOfCalendar % sizeArray;
			sumOfArraysInARow = array[i][j] + array[i][j];

			if (array[i][j] == tmp) {
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