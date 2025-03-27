#include "Dog.h"

// Constructor
Dog::Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed)
    : Pet(name, species, age, hungerLevel), breed(breed) {}

// Override printInfo
void Dog::printInfo() const {
    Pet::printInfo();
    std::cout << "Breed: " << breed << std::endl;
}

// Override makeSound
void Dog::makeSound() const {
    std::cout << getName() << " says: Woof! Woof!" << std::endl;
}

// Getter for breed
std::string Dog::getBreed() const {
    return breed;
}
