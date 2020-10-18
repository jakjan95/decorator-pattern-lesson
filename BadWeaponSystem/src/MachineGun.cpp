#include "MachineGun.hpp"

MachineGun::MachineGun()
    : Weapon(15, 5, 0.5) {}

std::string MachineGun::display() {
    return "Machine Gun";
}

double MachineGun::damage() {
    return power_ * accuracy_;
}