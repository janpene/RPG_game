#include <iostream>
#include "domain/Hero.h"
#include "app/Terminal.h"

using namespace std;



int main() {
    Terminal *terminal = new Terminal(20,10);
    terminal->draw();
    return 0;
}
