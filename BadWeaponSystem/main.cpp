#include <iostream>
#include <memory>

#include "Gun.hpp"
#include "MachineGun.hpp"
#include "Rifle.hpp"

#include "GunWithLaser.hpp"
#include "GunWithSlincer.hpp"
#include "GunWithSlincerAndLaser.hpp"

int main() {
    auto gun = std::make_unique<Gun>();
    auto rifle = std::make_unique<Rifle>();
    auto machineGun = std::make_unique<MachineGun>();

    std::cout << gun->display() << " damage " << gun->damage() << '\n';
    std::cout << rifle->display() << " damage " << rifle->damage() << '\n';
    std::cout << machineGun->display() << " damage " << machineGun->damage() << '\n';

    auto gunWithLaser = std::make_unique<GunWithLaser>();
    std::cout << gunWithLaser->display() << " damage " << gunWithLaser->damage() << '\n';

    auto gunWithSlincer = std::make_unique<GunWithSlincer>();
    std::cout << gunWithSlincer->display() << " damage " << gunWithSlincer->damage() << '\n';

    auto gunWithSlincerAndLaser = std::make_unique<GunWithSlincerAndLaser>();
    std::cout << gunWithSlincerAndLaser->display() << " damage " << gunWithSlincerAndLaser->damage() << '\n';

    return 0;
}
