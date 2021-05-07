//
// Created by 71M3 on 7.5.2021.
//

#ifndef RPG_IGRA_WORLDOBJ_H
#define RPG_IGRA_WORLDOBJ_H


class WorldObj {
public:
    int x;
    int y;
    char symbol;
    WorldObj(int px, int py, char psymbol) {
        x=px;
        y=py;
        symbol=psymbol;
    }
};


#endif //RPG_IGRA_WORLDOBJ_H
