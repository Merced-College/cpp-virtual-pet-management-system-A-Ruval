#ifndef DRAGON_H
#define DRAGON_H

#include "Pet.h"

class Dragon : public Pet {
private:
    int wingspan; // in meters
    int firePower; // 0-100 scale

public:
    // Constructor
    Dragon(const std::string& name, const std::string& species, int age, int hungerLevel, int wingspan, int firePower);

    // Override functions
    void printInfo() const override;
    void makeSound() const override;


    // New Method
    void breatheFire() const;
};

#endif
