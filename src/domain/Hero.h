//
// Created by 71M3 on 7.5.2021.
//

#ifndef RPG_IGRA_HERO_H
#define RPG_IGRA_HERO_H


#include "WorldObj.h"

class Hero : public WorldObj {
public:
    int power;
    Hero(int px, int py) : WorldObj(px, py, 'H') {
        power=5;
    }
};


#endif //RPG_IGRA_HERO_H
