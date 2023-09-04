#include <iostream>
#include <string>

//This program simulates a simple Mad Libs game
//User gets queried random words
//Then a random story is written
int main(){
    std::string 
        name = "",
        color = "",
        object = "",
        animal = "",
        profession = "",
        instrument = "",
        food = "";

    std::cout << "Please type a person's name: ";
    getline(std::cin, name);
    std::cout << "Please type a color: ";
    getline(std::cin, color);
    std::cout << "Please type a object: ";
    getline(std::cin, object);
    std::cout << "Please type an animal: ";
    getline(std::cin, animal);
    std::cout << "Please type a profession/job: ";
    getline(std::cin, profession);
    std::cout << "Please type a instrument: ";
    getline(std::cin, instrument);
    std::cout << "Please type a food: ";
    getline(std::cin, food);

    std::cout << "Out of the " << color << ", " << name << " is being chased by an angry " << animal;
    std::cout << ". In the background you see there is a " << profession << " playing a " << instrument;
    std::cout << ". Suddenly, you wake up to the loud sound of a " << object << " falling on the floor!";
    std::cout << " And you notice " << name << " eating a delicious " << food <<std::endl;

    return 0;
}