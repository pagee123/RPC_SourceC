#pragma once
#include <cstdint>
typedef std::uint64_t exptype;
typedef std::uint16_t leveltype;

class LevelSystem{
    public:
        static const 

        LevelSystem() {
            CurrentLevel = 1u;
            CurrentEXP = 0u;    
        }
        void gainEXP(exptype gained_exp){
            CurrentEXP += gained_exp;
            check_if_leveled();
        }
    protected:
        leveltype CurrentLevel;
        leveltype LevelupsAvalible;
        exptype CurrentEXP; 

        void check_if_leveled(){
            leveltype Curren_equivent_level = CurrentLevel + LevelupsAvalible;
        } 
};