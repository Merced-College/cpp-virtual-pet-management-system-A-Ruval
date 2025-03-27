#include "Cat.h"

// Constructor
Cat::Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy)
    : Pet(name, species, age, hungerLevel), favoriteToy(favoriteToy) {}

// Override printInfo
void Cat::printInfo() const {
    Pet::printInfo();
    std::cout << "Favorite Toy: " << favoriteToy << std::endl;
}

// Override makeSound
void Cat::makeSound() const {
    std::cout << getName() << " says: Meow!" << std::endl;
}

// Getter for favoriteToy
std::string Cat::getFavoriteToy() const {
    return favoriteToy;
}
