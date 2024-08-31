#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main() {
   
    std::srand(static_cast<unsigned int>(std::time(0)));
    

    int randomNumber = std::rand() % 100 + 1;
    int playerGuess = 0;
    int numberOfTries = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have picked a number between 1 and 100. Can you guess it?\n";

  
    while (playerGuess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> playerGuess;
        numberOfTries++;

        if (playerGuess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (playerGuess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << numberOfTries << " tries.\n";
        }
    }

    return 0;
}