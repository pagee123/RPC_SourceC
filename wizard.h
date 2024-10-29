#pragma one
#include "hp.h"
#include "statblock.h"
#include "levelsystem.h"

class Wizard : public hp, public StatBlock, public LevelSystem{

public:
    static const hptype BASEHP = (hptype)9u;    
    static const stattype BASESTR = (stattype)1u;
    static const stattype BASEINT = (stattype)4u;

    static const hptype HPGROWTH = (hptype)5u;    
    static const stattype STRGROWTH = (stattype)1u;
    static const stattype INTGROWTH = (stattype)2u;
    
    Wizard() : hp(BASEHP, BASEHP), StatBlock(BASESTR,BASEINT) {
        
    }

private:
    void LevelUp() override{
        setMaxHP(BASEHP + getMaxHp());
        increaseStats(STRGROWTH, INTGROWTH);
    }
};