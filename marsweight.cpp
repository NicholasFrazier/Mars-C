// This program converts body weight on Earth to body weight on Mars.

#include <iostream>

int main() {
	// Add your code below  
	double weighte = 0;
	double weightm = 0;

	std::cout << "Enter your weight weight on Earth in pounds to determine your weight on Mars!\n";

	std::cin >> weighte;

	weightm = weighte * .38;

	std::cout << "Your weight on Mars would be: " << weightm << " pounds.\n";

	return 0;


}