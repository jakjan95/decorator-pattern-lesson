#include "MachineGun.hpp"


MachineGun::MachineGun(double power, size_t capacity, double accuracy)
    : power_{power}, accuracy_{accuracy}, Weapon(capacity) {}

std::string MachineGun::display() {
    return "Machine Gun";
}

double MachineGun::damage() {
    return power_ * accuracy_;
}