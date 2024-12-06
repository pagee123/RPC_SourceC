#pragma once
#include <cstdint>
typedef std::int16_t welltype;

class PointWell{
public:
    // return true if set successfully
    bool setMax(welltype new_max){
        if(new_max < 1)
            return false;

        Max = new_max;

        if(Current > Max)
            Current = Max;
        
        return true;
    }
    
    welltype getMax(){
        return Max;
    }

    welltype getCurrent(){
        return Current;
    }

    void reduceCurrent(welltype damage){
        if(damage > Current){
            Current = 0;
            return;
        }
    
        Current -= damage;    
    }

    void increaseCurrent(welltype amount){
        if(amount+Current>Max){
            Current = Max;
            return;
        }

        Current += amount;
    }

    PointWell(){
        Current = 1;
        Max = 1;
    }

    PointWell(welltype c, welltype m){
        Current = c;
        Max = m;
        if(Current > Max)
            Current = Max;
    }

private:
    welltype Current;
    welltype Max;
};