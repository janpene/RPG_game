//
// Created by 71M3 on 7.5.2021.
//

#ifndef RPG_IGRA_PRINCESS_H
#define RPG_IGRA_PRINCESS_H


#include "WorldObj.h"

class Princess : public WorldObj {
public:
    Princess(int px, int py) : WorldObj(px, py, 'P') {}
};


#endif //RPG_IGRA_PRINCESS_H
