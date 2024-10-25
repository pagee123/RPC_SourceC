#pragma one
#include "hp.h"
#include "statblock.h"

class Cleric : public hp, public StatBlock, public LevelSystem {

public:
    static const hptype HPGROTH = (hptype)14u;    
    static const stattype BASESTR = (stattype)2u;
    static const stattype BASEINT = (stattype)3u;
    
    Cleric() : hp(HPGROTH, HPGROTH), StatBlock(BASESTR,BASEINT) {
        
    }

private:

};