#include <iostream>

//Program to calculate/generate the times table for a number X
int main(){
    int number = 0;
    
    std::cout << "Enter the number you would you like to create its times table? " << std::endl;
    std::cout << ">> ";
    std::cin >> number;

    for(int multiplier = 0; multiplier < 13; multiplier++)
    {
        std::cout << number << " X " << multiplier << " = " << (number * multiplier) << std::endl;
    }

    return 0;
}