#include "Gun.hpp"

Gun::Gun()
    : Weapon(15, 5, 0.7) {}

std::string Gun::display() {
    return "Gun";
}

double Gun::damage() {
    return power_ * accuracy_;
}