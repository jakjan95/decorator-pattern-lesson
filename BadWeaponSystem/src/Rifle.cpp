#include "Rifle.hpp"

Rifle::Rifle()
    : Weapon(35, 10, 1.0) {}

std::string Rifle::display() {
    return "Rifle";
}

double Rifle::damage() {
    return power_ * accuracy_;
}