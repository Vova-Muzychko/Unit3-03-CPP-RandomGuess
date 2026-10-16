// Copyright 2026 Vova M
// Created by: Vova M
// Date: October 16, 2026
// This program is a random number guessing game.
#include <cstdlib>
#include <ctime>
#include <iostream>

// Main function
int main() {
    // Set the random number seed.
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number from 0 to 9.
    int correct_answer = std::rand() % 10;
    int guess;

    // Ask the user to guess the number.
    std::cout << "Username: Vova M" << std::endl;
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> guess;

    // Check if the guess is correct.
    if (guess == correct_answer) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong. The correct answer was: "
        << correct_answer << std::endl;
    }

    return 0;
}
