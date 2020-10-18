#include <iostream>

#include "Gun.hpp"
#include "Laser.hpp"
#include "Slincer.hpp"
#include "MachineGun.hpp"


int main() {
    auto gun = std::make_shared<Gun>(15, 5, 0.7);

    std::cout << gun->display() << " damage " << gun->damage() << '\n';

    auto gunWithLaser = std::make_shared<Laser>(gun);
    std::cout << gunWithLaser->display() << " damage " << gunWithLaser->damage() << '\n';

    std::unique_ptr<Weapon> gunWithLaserAndSlincer = std::make_unique<Gun>(15, 5, 0.7);
    gunWithLaserAndSlincer = std::make_unique<Laser>(std::move(gunWithLaserAndSlincer));
    gunWithLaserAndSlincer = std::make_unique<Slincer>(std::move(gunWithLaserAndSlincer));

    std::cout << gunWithLaserAndSlincer->display() << " damage " << gunWithLaserAndSlincer->damage() << '\n';


    std::unique_ptr<Weapon> machineGunWithLaserAndSlincer = std::make_unique<MachineGun>(20, 30, 0.5);
    machineGunWithLaserAndSlincer = std::make_unique<Laser>(std::move(machineGunWithLaserAndSlincer));
    machineGunWithLaserAndSlincer = std::make_unique<Slincer>(std::move(machineGunWithLaserAndSlincer));

    std::cout << machineGunWithLaserAndSlincer->display() << " damage " << machineGunWithLaserAndSlincer->damage() << '\n';

    return 0;
}