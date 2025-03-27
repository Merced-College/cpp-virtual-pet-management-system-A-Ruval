#include <iostream>
#include <vector>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Dragon.h" //ADDED PET

int main () {
    // Create objects of derived classes
    Dog* myDog = new Dog("Rex", "Canine", 4, 3, "Golden Retriever");
    Cat* myCat = new Cat("Tuna", "Feline", 2, 5, "Toy Mouse");
    Dragon* myDragon = new Dragon("King Ghidorah", "Dragon", 200, 8, 20, 100);

    // Store pets in a polymorphic container
    std::vector<Pet*> pets = {myDog, myCat, myDragon};

    //Call virtual functions
    std::cout << "Pet Information and Sounds:\n";
    for (Pet* pet : pets) {
        pet->printInfo();
        pet->makeSound();
        std::cout << std::endl;
    }

    // Unique method from Dragon custom class
    myDragon->breatheFire();

    
    for (Pet* pet : pets) {
        delete pet;
    }

    return 0;
}
