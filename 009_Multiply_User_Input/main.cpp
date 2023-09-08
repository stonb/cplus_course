#include <iostream>
#include <array>

// Program that multiplies by X and -X, N user inputs using arrays
// This program uses Array library and regular C Arrays
int main()
{
    const int ARRAY_SIZE = 5;
    const int MULTIPLIER = 2;
    std::array<int, ARRAY_SIZE> userInputNumbers;
    int hiddenArray[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        int holdInput = 0;
        std::cout << "Enter an integer number: ";
        std::cin >> holdInput;

        userInputNumbers[i] = holdInput;
        hiddenArray[i] = -holdInput;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << std::endl << userInputNumbers[i] * MULTIPLIER << "\t" << hiddenArray[i] * MULTIPLIER;
    }
    std::cout << std::endl;

    return 0;
}