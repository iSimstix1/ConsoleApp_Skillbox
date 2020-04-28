#include <iostream>
#include <string>
#include <ctime>

int main()
{

	int TheCurrentNumberOfCalendar = 28;
	int SumOfArraysInARow = 0;

	const int size_1 = 3;
	const int size_2 = 3;
	int array[size_1][size_2] = { 
		{  1, 2, 3 }, 
		{  2, 4, 6 },
		{  3, 6, 9 }
	};


	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {

			std::cout << array[i][j] << " ";

			int tmp = TheCurrentNumberOfCalendar % 11;
			
			if (array[i][j] == tmp) {
				SumOfArraysInARow = array[i][j] + array[i][j];
			}
		}
		if (SumOfArraysInARow) {
			std::cout << "| Amount on line: " << SumOfArraysInARow;
		}
		std::cout << std::endl;
	}
	return 0;
}