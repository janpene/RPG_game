//
// Created by 71M3 on 7.5.2021.
//

#ifndef RPG_IGRA_WORLD_H
#define RPG_IGRA_WORLD_H


#include "Hero.h"
#include "Princess.h"
#include "Enemy.h"

class World {
public:
    int length;
    int height;
    Hero *hero;
    Princess *princess;
    Enemy *enemy[5];
    World(int plength, int pheight) {
        length = plength;
        height = pheight;
        hero = new Hero(5, 5);
        princess = new Princess(0, 0);
        for (int j = 0; j < 5; ++j) {
            Enemy *enemyObj = new Enemy(j + 3, j + 3);
            enemy[j] = enemyObj;
        }
    }
        virtual void draw()=0;
    /*virtual void draw() { // abstraktni class

    }*/
};


#endif //RPG_IGRA_WORLD_H
