//
// Created by 71M3 on 7.5.2021.
//

#ifndef RPG_IGRA_ENEMY_H
#define RPG_IGRA_ENEMY_H


#include "WorldObj.h"

class Enemy: public WorldObj {
public:
    Enemy(int px, int py) : WorldObj(px, py, 'E') {}
};


#endif //RPG_IGRA_ENEMY_H
