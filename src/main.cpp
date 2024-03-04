#include "GuessTheNumber.hpp"
#include <iostream>

int main(void)
{
    //instantiating class guess the number
    GuessTheNumber guess = GuessTheNumber();

    //call to user input method from guess the number class
    guess.input_range();

    //call to genrate secret number method of class.
    guess.gen_secret_number();

    // error handling for game logic function.
    try
    {
        guess.game_logic();
    }
    catch (std::out_of_range const &ex)
    {
        std::cerr << "Error: " << ex.what() << std::endl;
    }
}