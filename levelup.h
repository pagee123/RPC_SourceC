#pragma once
#include <cstdint>
typedef std::uint64_t exptype;
typedef std::uint16_t leveltype;

class LevelSystem{
    public:
    static const exptype LEVEL2AT = 100u;

        LevelSystem() {
            CurrentLevel = 1u;
            CurrentEXP = 0u;   
            LevelUpsAvalible = 0u; 
            LevelUpsAvalible = LEVEL2AT;
        }
        void gainEXP(exptype gained_exp){
            CurrentEXP += gained_exp;
            check_if_leveled();
        }
    protected:
        leveltype CurrentLevel;
        leveltype LevelUpsAvalible;
        exptype CurrentEXP; 
        exptype EXPToNextLevel;

        void check_if_leveled(){
            if(CurrentEXP < EXPToNextLevel){
                CurrentLevel++;
                LevelUpsAvalible++;
                            
            }
                
                static const leveltype LEVELSCALAR = 2u;
            } 
};