#pragma one
#include "hp.h"
#include "statblock.h"

class Rogue : public hp , public StatBlock {

public:
    static const hptype HPGROTH = (hptype)13u;    
    static const stattype BASESTR = (stattype)3u;
    static const stattype BASEINT = (stattype)2u;
    
    Rogue() : hp(HPGROTH, HPGROTH), StatBlock(BASESTR,BASEINT) {
        
    }

private:

};