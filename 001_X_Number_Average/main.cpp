#include <iostream>

//Program that accepts X numbers and finds their average
//It is intended for simple input output practice
int main(){
    double 
        firstNum = 0,
        secondNum = 0,
        thirdNum = 0,
        average = 0;
    const int TOTAL_NUMS = 3;
    
    std::cout << "Please type your first number: ";
    std::cin >> firstNum ;
    std::cout << "Please type your second number: ";
    std::cin >> firstNum ;
    std::cout << "Please type your third number: ";
    std::cin >> firstNum ;

    average = (firstNum + secondNum + thirdNum) / TOTAL_NUMS;

    std::cout << "The average of the " << TOTAL_NUMS << " numbers is: " << average << std::endl;

    return 0;
}