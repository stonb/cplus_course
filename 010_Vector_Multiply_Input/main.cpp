#include <iostream>
#include <vector>

// Program that multiplies by X , N user inputs using vectors
// User input stops when user a negative integer is entered
int main()
{
    const int MULTIPLIER = 3;
    std::vector<int> userInput;
    int holdInput = 1;
    
    while (holdInput > -1)
    {
        std::cout << "Enter any positive integer (negative to exit): ";
        std::cin >> holdInput;
        if (holdInput >= 0)
        {
            userInput.push_back(holdInput);
        }
    }

    std::cout << "Your numbers multiplied by "<< MULTIPLIER << ": " << std::endl;
    for (int input : userInput)
    {
        std::cout << input << " -> " << input * MULTIPLIER << std::endl;
    }
    
    return 0;
}