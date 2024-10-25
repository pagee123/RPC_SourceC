#include <iostream>
#include "allclasses.h"

int main(){
    Warrior warr1;
    Wizard wiz1;
    Cleric cler1;
    Rogue rog1;

    std::cout << "Warrior\n" 
        << "-MaxHP: " << warr1.getMaxHp() << "\n" 
        << "-Strength: " << warr1.getStrenth() << "\n"
        << "-Intellect: " << warr1.getIntellect() << "\n";

    std::cout << "Wizard\n" 
        << "-MaxHP: " << wiz1.getMaxHp() << "\n" 
        << "-Strength: " << wiz1.getStrenth() << "\n"
        << "-Intellect: " << wiz1.getIntellect() << "\n";

    std::cout << "Cleric\n" 
        << "-MaxHP: " << cler1.getMaxHp() << "\n" 
        << "-Strength: " << cler1.getStrenth() << "\n"
        << "-Intellect: " << cler1.getIntellect() << "\n";

    std::cout << "Rogue\n" 
        << "-MaxHP: " << rog1.getMaxHp() << "\n" 
        << "-Strength: " << rog1.getStrenth() << "\n"
        << "-Intellect: " << rog1.getIntellect() << "\n";

    system("pause");
    return 0;
}