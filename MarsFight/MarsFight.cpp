#include <iostream>

int main() {

  double weight;
  int planet;

  std::cout << "What is your weight on Earth?\n";
  std::cin >> weight;

  std::cout << "Enter your desired fight planet's number:\n";
  std::cout << "1: Mercury\n";
  std::cout << "2: Venus\n";
  std::cout << "3: Earth\n";
  std::cout << "4: Mars\n";
  std::cout << "5: Jupiter\n";
  std::cout << "6: Saturn\n";
  std::cout << "7: Uranus\n";
  std::cout << "8: Neptune\n";
  std::cin >> planet;

double planet_weight;

  switch(planet) {

    case 1:
      planet_weight = weight * .38;
      break;
  
    case 2:
      planet_weight = weight * .91;
      break;

    case 3:
      planet_weight = weight * 1.00;
      break;

    case 4:
      planet_weight = weight * .38;
      break;

    case 5:
      planet_weight = weight * 2.34;
      break;
     
    case 6:
      planet_weight = weight * 1.06;
      break;

    case 7:
      planet_weight = weight * .92;
      break;    

    case 8:
      planet_weight = weight * 1.19;
      break;
    default:
      std::cout << "Invalid planet number!\n";
      return 0;
  }
  std::cout << "Your weight on the selected planet is: " << planet_weight << " pounds!\n";
}