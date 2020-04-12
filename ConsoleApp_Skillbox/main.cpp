#include <iostream>
#include <string>

int main()
{
	
	std::string platformName = "Skillbox";

	std::cout << "Platfrom name    | " << platformName << std::endl;
	std::cout << "Skillbox length  | " << platformName.length() << std::endl;

	// Get the first character
	std::cout << "The first symbol | " << platformName[platformName.length() - platformName.length()] << std::endl;
	// Get last character
	std::cout << "Last symbol      | " << platformName[platformName.length() - 1] << std::endl;

}
