#include <iostream>
#include <ctime>

int main() {
 
    srand(time(0)); // Seed the random number generator
    int number = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int userscount = 0;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        userscount++;

        if (guess == number) {
            std::cout << "Congratulations! You guessed the number within " << userscount << " tries!" << std::endl;
            break;
        } else if (guess < number) {
            std::cout << "Try a higher number." << std::endl;
        } else {
            std::cout << "Try a lower number." << std::endl;
        }
    }

    return 0;

}