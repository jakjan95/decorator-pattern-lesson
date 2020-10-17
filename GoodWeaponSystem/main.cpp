#include <iostream>

#include "Gun.hpp"
#include "Laser.hpp"

int main() {
    auto gun = std::make_shared<Gun>(15, 5, 0.7);

    std::cout << gun->display() << " damage " << gun->damage() << '\n';

    auto gunWithLaser = std::make_shared<Laser>(gun);
    std::cout << gunWithLaser->display() << " damage " << gunWithLaser->damage() << '\n';

    return 0;
}