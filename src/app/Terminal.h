//
// Created by 71M3 on 7.5.2021.
//

#ifndef RPG_IGRA_TERMINAL_H
#define RPG_IGRA_TERMINAL_H


#include "../domain/World.h"
#include <iostream>
using namespace std;

class Terminal : public World {
public:
    Terminal(int plength, int pheight) : World(plength, pheight) {}
    void draw() override {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < length; ++x) {
                if (x == hero->x && y == hero->y) {
                    cout << hero->symbol;
                }
                else if (x == princess->x && y == princess->y) {
                    cout << princess->symbol;
                }
                else cout << '*';
            }
            cout << endl;
        }
    }
};


#endif //RPG_IGRA_TERMINAL_H
