#include <iostream>
#include "playercharacter.h"
//#include "allclasses.h"

int main(){

    //---------Test by classes
    // std::cout << "Warrior\n" 
    //     << "-MaxHP: " << warr1.getMaxHp() << "\n" 
    //     << "-Strength: " << warr1.getStrenth() << "\n"
    //     << "-Intellect: " << warr1.getIntellect() << "\n";

    // std::cout << "Wizard\n" 
    //     << "-MaxHP: " << wiz1.getMaxHp() << "\n" 
    //     << "-Strength: " << wiz1.getStrenth() << "\n"
    //     << "-Intellect: " << wiz1.getIntellect() << "\n";

    // std::cout << "Cleric\n" 
    //     << "-MaxHP: " << cler1.getMaxHp() << "\n" 
    //     << "-Strength: " << cler1.getStrenth() << "\n"
    //     << "-Intellect: " << cler1.getIntellect() << "\n";

    // std::cout << "Rogue\n" 
    //     << "-MaxHP: " << rog1.getMaxHp() << "\n" 
    //     << "-Strength: " << rog1.getStrenth() << "\n"
    //     << "-Intellect: " << rog1.getIntellect() << "\n";

    //---------Test by LevelUp
    // for(int i = 0;i < 2; i++){
    //     std::cout 
    //         << "Cleric Level: " << cler1.getLevel() << '\n'
    //         << "-EXP: " << cler1.getCurrentEXP() << "/" << cler1.getEXPToNextLevel() << '\n'
    //         << "-MaxHP: " << cler1.getMaxHp() << '\n'
    //         << "-Strength: " << cler1.getStrenth() << '\n'
    //         << "-Intellect: " << cler1.getIntellect() << '\n';
    //         ;
    //     if (i < 1)
    //         cler1.gainEXP(100u);
    // }

    // std::cout << "------------------------\n";

    // for(int i = 0;i < 2; i++){
    //     std::cout 
    //         << "Rogue Level: " << rog1.getLevel() << '\n'
    //         << "-EXP: " << rog1.getCurrentEXP() << "/" << rog1.getEXPToNextLevel() << '\n'
    //         << "-MaxHP: " << rog1.getMaxHp() << '\n'
    //         << "-Strength: " << rog1.getStrenth() << '\n'
    //         << "-Intellect: " << rog1.getIntellect() << '\n';
    //         ;
    //     if (i < 1)
    //         rog1.gainEXP(100u);
    // }


    //---------PlayerCharacter----

    PlayerCharacter p1(new Wizard());

    for(int i = 0;i < 2; i++){
        std::cout 
            << p1.getClassName()
            << " Level: " << p1.getLevel() << '\n'
            << "-EXP: " << p1.getCurrentEXP() << "/" << p1.getEXPToNextLevel() << '\n'
            << "-HP: " << p1.getCurrentHP() << "/" << p1.getMaxHP() << '\n'
            << "-Strength: " << p1.getStrength() << '\n'
            << "-Intellect: " << p1.getIntellect() << '\n'
            << "-Agility: " << p1.getAgility() << '\n'
            << "-Armor: " << p1.getArmor() << '\n'
            << "-Resist: " << p1.getElementRes() << '\n';
        if (i < 1)
            p1.gainEXP(100u);
    }


    system("pause");
    return 0;
}