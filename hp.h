#include "hitpointype.h"

class hp{
public:
    // return true if set successfully
    bool setMaxHP(hptype new_max_hp){
        if(new_max_hp < 1)
            return false;

        MaxHp = new_max_hp;

        if(CurrentHP>MaxHp)
            CurrentHP=MaxHp;
        
        return true;
    }

    void takeDamage(hptype damage){
        if(damage>CurrentHP+ShieldHP){
            CurrentHP=0;
            return;
        }
        if(ShieldHP>damage)
            ShieldHP -= damage;
    
    CurrentHP -= damage;    
    }

    void heal(hptype amount){
        if(amount+CurrentHP>MaxHp){
            CurrentHP = MaxHp;
            return;
        }

        CurrentHP += amount;
    }
private:
    hptype ShieldHP;
    hptype CurrentHP;
    hptype MaxHp;
};