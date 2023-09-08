#include <iostream>
#include <cstdlib>
#include <ctime>

//Program that checks if 10 numbers are either odd or even
//Numbers are calculated randomly using srand/rand functions
int main()
{

    srand(time(nullptr));

    for (int i = 0; i < 10; i++)
    {
        int randomNumber = rand() % 51; // Random number between 0 and 50

        if ((randomNumber % 2) == 0)
        {
            std::cout << (i + 1) << " Number "<< randomNumber << " is even!" << std::endl; 
        }
        else
        {
            std::cout << (i + 1) << " Number "<< randomNumber << " is odd!" << std::endl; 
        }
    }

    return 0;
}