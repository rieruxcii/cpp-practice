#include <iostream>

int main() {

  int guess;

  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;

  // Write a while loop here:
  while (guess != 8)
  {
    std::cout << "Wrong guess, try again!" << std::endl;
    std::cout << "Another guess: ";
    std::cin >> guess;
  }

  if (guess == 8) {

    std::cout << "You got it!\n";

  }

}