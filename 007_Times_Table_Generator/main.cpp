#include <iostream>

//Program to display on screen the times table from 1 to 12
int main(){
    
    std::cout << "TIMES TABLES: " << std::endl;
    
    for(int multiplier = 0; multiplier < 13; multiplier++)
    {
        for(int multiplicand = 1; multiplicand < 13; multiplicand++)
        {
            int product = multiplicand * multiplier;
            std::cout <<  multiplicand << " X " << multiplier << " = " << product << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}