#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
private:
    std::string breed;

public:
    // Constructor
    Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed);

    // Override functions
    void printInfo() const override;
    void makeSound() const override;


    // Getter for breed
    std::string getBreed() const;
};

#endif
