#pragma once
#include <cstdint>
typedef std::uint64_t exptype;
typedef std::uint16_t leveltype;

class PlayerCharacterDelegate{
    public:
    static const exptype LEVEL2AT = 100u;

        PlayerCharacterDelegate() {
            CurrentLevel = 1u;
            CurrentEXP = 0u;   
            EXPToNextLevel = LEVEL2AT;
        }

        void gainEXP(exptype gained_exp){
            CurrentEXP += gained_exp;
            check_if_leveled();
        }

        leveltype getLevel(){
            return CurrentLevel;
        }

        exptype getCurrentEXP(){
            return CurrentEXP;
        }

        exptype getEXPToNextLevel(){
            return EXPToNextLevel;
        }

        virtual void LevelUp() = 0;

    protected:
        leveltype CurrentLevel;
        exptype CurrentEXP; 
        exptype EXPToNextLevel;

        bool check_if_leveled(){
            static const leveltype LEVELSCALAR = 2u;
            if(CurrentEXP >= EXPToNextLevel){
                CurrentLevel++;
                LevelUp();
                EXPToNextLevel *= LEVELSCALAR;
                return true;
            }       
            return false;
        }  

};

class Cleric : public PlayerCharacterDelegate {

public:
    static const hptype BASEHP = (hptype)14u;    
    static const stattype BASESTR = (stattype)2u;
    static const stattype BASEINT = (stattype)3u;

    static const hptype HPGROWTH = (hptype)7u;    
    static const stattype STRGROWTH = (stattype)1u;
    static const stattype INTGROWTH = (stattype)2u;

    
    Cleric() : hp(BASEHP, BASEHP), StatBlock(BASESTR,BASEINT) {}

    

private:
    void LevelUp() override{
        setMaxHP(HPGROWTH + getMaxHp());
        increaseStats(STRGROWTH, INTGROWTH);
    }
};