#pragma once

// guess the number game class
class GuessTheNumber
{
private:

    //lower and upper range to decide the range of guess the number game.
    int lower_range;
    int upper_range;

    // secret number totally randonm
    int secret_number;

    // attempt counter
    int attempts;

public:
    // taking lower and upper range from user.
    void input_range();

    void gen_secret_number();

    void game_logic();
};