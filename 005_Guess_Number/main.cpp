#include <iostream>
#include <cstdlib>
#include <ctime>

//Program allows the user to guess a number between 0 to a 100
//It also counts the ammount of times it took the player to guess the right number
int main()
{
    srand(time(nullptr));
    int randomNumber = rand() % 101 + 1; // Random number betwwen 1 and 100
    bool isGuessCorrect = false;
    int guess = -1;
    int guessCount = 0;

    while (!isGuessCorrect)
    {
        std::cout << "Guess the number between 1 and 100? ";
        std::cin >> guess;
        guessCount++;

        if(guess < randomNumber)
        {
            std::cout << "Ouch... guess is too low! Try again..." << std::endl;
        }
        else if( guess > randomNumber )
        {
            std::cout << "WOW WOW... guess is too high! Try again..." << std::endl;
        }
        else if( guess == randomNumber )
        {
            std::cout << std::endl << "Congratulations! " << randomNumber << " is correct!" << std::endl;
            std::cout << "You guessed in a total of " << guessCount << " tries!" << std::endl;
            isGuessCorrect = true;
        }
    }

    return 0;
}