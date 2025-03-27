#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
private:
    std::string favoriteToy;

public:
    // Constructor
    Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy);

    // Override functions
    void printInfo() const override;
    void makeSound() const override;


    // Getter for favoriteToy
    std::string getFavoriteToy() const;
};

#endif
