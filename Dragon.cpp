#include "Dragon.h"

// Constructor
Dragon::Dragon(const std::string& name, const std::string& species, int age, int hungerLevel, int wingspan, int firePower)
    : Pet(name, species, age, hungerLevel), wingspan(wingspan), firePower(firePower) {}

// Override printInfo
void Dragon::printInfo() const {
    Pet::printInfo();
    std::cout << "Wingspan: " << wingspan << " meters\n";
    std::cout << "Fire Power: " << firePower << "/100\n";
}

// Override makeSound
void Dragon::makeSound() const {
    std::cout << getName() << " roars mightily, shaking the ground!\n";
}

// New Method
void Dragon::breatheFire() const {
    std::cout << getName() << " breathes fire with power of: " << firePower << "!\n";
}
