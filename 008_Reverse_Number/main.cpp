#include <iostream>

//Program that allows to reverse number that is max unsigned long long
int main()
{
    
    unsigned long long 
        originalNumber = 0,
        copyOriginalNumber = 0,
        reversedNumber = 0;
    int lastDigitHolder = 0;

    std::cout << "Type any positive integer greater than 10: (maximum of 19 digits) ";
    std::cin >> originalNumber;

    if (originalNumber < 11 || originalNumber == ULLONG_MAX)
    {   
        std::cout << "Sorry, number is less than 10 or too large to process. Bye...." << std::endl;
        return 0;
    }

    copyOriginalNumber = originalNumber;

    while( copyOriginalNumber > 0)
    {
        lastDigitHolder = copyOriginalNumber % 10;
        reversedNumber = (reversedNumber * 10) + lastDigitHolder;
        copyOriginalNumber = copyOriginalNumber / 10;
    }

    std::cout << "Original number: " << originalNumber << std::endl;
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    return 0;
}