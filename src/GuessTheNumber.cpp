//necessary header files
#include "GuessTheNumber.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

void GuessTheNumber::input_range()
{
    //validinput to check if lower is less than upper range or not.
    bool validInput = false;
    do
    {
        //taking lower and uooer range as user input.
        std::cout << "Enter lower range for game." << std::endl;
        std::cin >> lower_range;

        std::cout << "Enter upper range for game." << std::endl;
        std::cin >> upper_range;

        // to check if lower range is less than upper range or not.

        if (lower_range > upper_range)
        {
            std::cout << "Invalid Input! Enter Input Again." << std::endl;
        }
        else if (lower_range == upper_range)
        {
            std::cout << "Invalid Input! Enter Input Again." << std::endl;
        }
        else
        {
            validInput = true;
        }
    } while (!validInput);
}

// function to generate secret number
void GuessTheNumber::gen_secret_number()
{
    std::srand(std::time(nullptr));
    secret_number = std::rand() % (upper_range - lower_range + 1) + lower_range;
}

// game logic function
void GuessTheNumber::game_logic()
{

    //guess number taken as input from user.
    int guess_number;
    do
    {
        //incrementing attempt counter so the number of attempts user took can be determined.
        attempts++;

        std::cout << "Enter your guess number." << std::endl;
        std::cin >> guess_number;

        //to check if guess number is within range.
        if (guess_number < lower_range || guess_number > upper_range)
        {
            throw std::out_of_range("Guess Number out of range.");
            continue;
        }

        //logic to run the game, which decides the winning condition.
        if (guess_number < secret_number)
        {
            std::cout << "Too low! Try again." << std::endl;
        }

        else if (guess_number > secret_number)
        {
            std::cout << "Too high! Try again." << std::endl;
        }

    } while (guess_number != secret_number);
    std::cout << "Congratulations! You have guessed the number correctly in " << attempts << " attempts" << std::endl;
}